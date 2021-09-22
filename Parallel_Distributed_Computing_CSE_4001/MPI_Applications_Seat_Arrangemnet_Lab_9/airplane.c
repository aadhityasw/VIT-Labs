#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include<mpi.h>

int main(int argc, char** argv)
{
    int s[20];
    for (int i = 0; i < 20; i++)
        s[i] = 0;

    srand(time(NULL));

    int r = rand() % 20;

    s[r] = 1;

    for (int i = 1; i < 20; i++)
    {
        if (s[i] == 1)
        {
            while (1)
            {
                int r1 = rand() % 20;
                if (s[r1] == 0)
                {
                    s[r1] = 1;
                    break;
                }
            }

        }
        else
        {
            s[i] = 1;
        }
    }

    int node = 0;
    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &node);

    if (node == 0)
    {
        int cnt = 0;
        for (int i = 0; i < 20; i++)
            if (s[i] == i)
                cnt++;
        printf("people seated at orignal place %f \n", (float)cnt / 20);
    }
    else if (node == 1)
    {
        int cnt = 0;
        for (int i = 0; i < 20; i++)
            if (s[i] != i)
                cnt++;
        printf("people seated at other place %f \n", (float)cnt / 20);
    }
    MPI_Finalize();
    return 0;
}
