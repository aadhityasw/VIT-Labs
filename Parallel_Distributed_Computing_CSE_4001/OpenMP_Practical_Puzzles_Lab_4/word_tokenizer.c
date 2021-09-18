#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>
#include <unistd.h>

#define MAX_FILE_COUNT 100
#define MAX_FILE_NAME_LENGTH 50
#define MAX_SENTENCE_COUNT 999
#define MAX_SENTENCE_LENGTH 500
#define CONSUMER_COUNT 2

int main()
{
    // Get all the names of the files in the corpus directory.
    struct dirent *de;
    DIR *dir = opendir("./corpus/");
    char *file_names[MAX_FILE_COUNT];
    int file_count = 0;
    while ((de = readdir(dir)) != NULL) 
    {
        //printf("%s\n", de->d_name);
        if (file_count > 1)
        {
            file_names[file_count-2] = de->d_name;
        }
        file_count ++;
    }
    file_count -= 2;
    printf("There is a total of %d files to be read.\n", file_count);
    closedir(dir);

    /* Use parallel programming paradgims to make the producer to scan text from the files 
          and place them in sentence array, while the consumers tokenize them.  */

    // Ask for threads one for each producer and CONSUMER_COUNT threads for consumers.
    omp_set_num_threads(file_count + CONSUMER_COUNT);
    char sentences[MAX_SENTENCE_COUNT][MAX_SENTENCE_LENGTH];
    int front=0, back=0;
    int production_over = 0;       // To indicate the completion of production.

    // Create an output file containing the tokenized words.
    FILE *output_file;
    output_file = fopen("result/outfile.txt", "w");

    #pragma omp parallel shared(sentences, front, back, production_over, output_file)
    {
        int num_threads = omp_get_num_threads();
        if (num_threads >= (file_count + CONSUMER_COUNT)) {
            // We have enough threads and hence we can continue.
            int thread_num = omp_get_thread_num();
            if (thread_num < file_count) {
                // Producer Threads
                // Read file i for thread i
                char *temp = "corpus/";
                char cur_file_name[MAX_FILE_NAME_LENGTH];
                strcat(cur_file_name, temp);
                strcat(cur_file_name, file_names[thread_num]);
                FILE *filePointer;
                filePointer = fopen(cur_file_name, "r");
                char cur_sentence[MAX_SENTENCE_LENGTH];
                while(fgets(cur_sentence, MAX_SENTENCE_LENGTH, filePointer) != NULL) {
                    strtok(cur_sentence, "\n");
                    #pragma omp critical(crit)
                    {
                        strcpy(sentences[back++], cur_sentence);
                        printf("Thread num : %d -- Reading %s\n", omp_get_thread_num(), sentences[back-1]);
                    }
                    sleep(1);
                }
                fclose(filePointer);
                production_over ++;
                printf("Thread num : %d -- Completed Reading.\n", omp_get_thread_num());
            }
            else {
                // Consumer Threads
                #pragma omp single
                {
                    int num_consumer_threads = omp_get_num_threads() - file_count;
                }
                while ((front<back) || (production_over<file_count))
                {
                    if (front == back) {
                        sleep(1);
                    }
                    else {
                        char cur_sentence[MAX_SENTENCE_LENGTH];
                        // Take a sentence from the queue.
                        #pragma omp critical(crit)
                        {
                            strcpy(cur_sentence, sentences[front++]);
                            printf("Thread num : %d -- Tokenizing %s\n", omp_get_thread_num(), cur_sentence);
                        }
                        if (strlen(cur_sentence) > 0) {
                            // Tokenize the sentence.
                            char tokenized[MAX_SENTENCE_LENGTH];
                            char *token = strtok(cur_sentence, " ");
                            while(token != NULL) {
                                strcat(tokenized, token);
                                strcat(tokenized, "\n");
                                token = strtok(NULL, " ");
                            }
                            // Store the tokenized words in the output file
                            #pragma omp critical(output_critical)
                            {
                                fputs(tokenized, output_file);
                                //printf("Thread num : %d -- Printing %s\n", omp_get_thread_num(), tokenized);
                            }
                            strcpy(tokenized, "");
                        }
                    }
                    sleep(1);
                }
            }
        }
        else {
            // We do not have enough threads.
            // As an expanded version, we can come up with methods to handle this situation in a better manner.
            #pragma omp single
            {
                printf("Not Enough threads are avalible.\n");
            }
        }
        #pragma omp barrier
    }
    fclose(output_file);
    printf("All the text has been tokenized successfully!!\n");
}
