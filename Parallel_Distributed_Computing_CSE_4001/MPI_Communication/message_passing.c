
// The processor with mypid = 0 will send integer messages to the processor with mypid = 1 "REPS" times.
#include "mpi.h"
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <stdlib.h> 

#define	REPS 10
#define MAXLENGTH 8000000

int main(argc,argv)
int argc;
char *argv[];

{
 int i,n,length;
 int *inmsg;
 int mypid,mysize;
 int rc;
 int sint;
 double start,finish,time, tottime=0;
 double bw;
 MPI_Status status;

 sint = sizeof(int);

 rc = MPI_Init(&argc,&argv);

 rc|= MPI_Comm_size(MPI_COMM_WORLD,&mysize);

 rc|= MPI_Comm_rank(MPI_COMM_WORLD,&mypid);

 length = 1;


 rc = MPI_Barrier(MPI_COMM_WORLD);

 if (mypid == 0)
 {

    for (i=1; i<=4; i++)
    {

    time = 0.0000000000000;

     printf("\n\nDoing round trip test for:\n");
     printf("Message length = %d integer value(s)\n",length);
     printf("Message size   = %d Bytes\n",sint*length);
     printf("Number of Reps = %d\n",REPS);

    // the length of the message keeps increasing
     inmsg = (int *) malloc(length*sizeof(int));

     start = MPI_Wtime();

     for (n=1; n<=REPS; n++)
     {
         // Send to process 0
      rc = MPI_Send(&inmsg[0],length,MPI_INT,1,0,MPI_COMM_WORLD);

  /* Now wait to receive the echo reply from process 1 */

      rc = MPI_Recv(&inmsg[0],length,MPI_INT,1,0,MPI_COMM_WORLD,&status);

     }

     finish = MPI_Wtime();

  /* Calculate round trip time average and bandwidth, and print */

      time = finish - start;
      tottime += time;

      length = 100*length;

    } 

    printf("Average communication time between P1, P2 = %f\n", tottime/REPS);
 }

   /*-------------------*/
  /* Task 1 processing */
 /*-------------------*/

 if (mypid == 1)
 {
    for (i=1; i<=4; i++)
    {

     for (n=1; n<=REPS; n++)
     {

   /*--------------------------------*/
  /* receive message from process 0 */
 /*--------------------------------*/

      rc = MPI_Recv(&inmsg[0],length,MPI_INT,0,0,MPI_COMM_WORLD,&status);

   /*-----------------------------*/
  /* return message to process 0 */
 /*-----------------------------*/

      rc = MPI_Send(&inmsg[0],length,MPI_INT,0,0,MPI_COMM_WORLD);
     }

     length = 100*length;

    }

 }

   /*--------------*/
  /* Finalize MPI */
 /*--------------*/

   MPI_Finalize();
   exit(0);
}
