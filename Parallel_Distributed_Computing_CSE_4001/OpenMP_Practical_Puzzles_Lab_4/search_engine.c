#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>
#include<unistd.h>
#include<stdbool.h>

#define MAX_FILE_COUNT 10
#define MAX_FILE_NAME_LENGTH 20
#define MAX_WORD_LENGTH 20
#define MAX_NUM_THREADS 4
#define MAX_SENTENCE_LENGTH 100

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
    printf("----> There is a total of %d files to be read.\n", file_count);
    closedir(dir);

    char word[MAX_WORD_LENGTH];
    printf("Enter the word to be searched : ");
    scanf("%s", word);

    int work[MAX_NUM_THREADS][100];
    int work_count[MAX_NUM_THREADS];
    memset(work, 0, sizeof(work));
    memset(work_count, 0, sizeof(work_count));
    
    bool flag = false;

    #pragma omp parallel shared(work, work_count, flag)
    {
        #pragma omp master
        {
            //Allocate work to other worker threads.
            int num_threads = omp_get_num_threads();
            printf("----> Number of avalible threads : %d.\n", num_threads);
            int thread_num = 1;
            for (int i=0; i<file_count; i++) {
                work[thread_num][work_count[thread_num]++] = i;
                thread_num ++;
                if (thread_num == num_threads-1) {
                    thread_num = 1;
                }
            }
        }
        #pragma omp barrier
        int thread_num = omp_get_thread_num();
        if (thread_num > 0) {
            printf("----> Thread : %d has %d files to read.\n", thread_num, work_count[thread_num]);
            for (int i=0; i<work_count[thread_num]; i++) {
                printf("----> Thread : %d is reading file : %s\n", thread_num, file_names[work[thread_num][i]]);

                // Read contents from file and search
                FILE *filePointer;
                char *temp = "corpus/";
                char cur_file_name[MAX_FILE_NAME_LENGTH];
                strcpy(cur_file_name, temp);
                strcat(cur_file_name, file_names[work[thread_num][i]]);
                filePointer = fopen(cur_file_name, "r");
                char cur_sentence[MAX_SENTENCE_LENGTH];
                while(fgets(cur_sentence, MAX_SENTENCE_LENGTH, filePointer) != NULL) {
                    if (strstr(cur_sentence, word)!= NULL) {
                        printf("A match has been found in %s.\n", file_names[work[thread_num][i]]);
                        flag = true;
                        break;
                    }
                    strcpy(cur_sentence, "");
                }
                fclose(filePointer);
            }
        }
    }
    if (flag == false) {
        printf("There was no match found for the word in any of the servers.\n");
    }
}