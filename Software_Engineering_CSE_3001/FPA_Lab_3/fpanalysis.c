#include<stdio.h>
#include<stdlib.h>
void main()
{
     int a[5],b[5],c[14];
     printf("Enter Count values for-->No of User Inputs,\n\t\tNo of User Outputs,\n\t\tNo of User Inquiries,\n\t\tNo of Files,\n\t\tNo of External Interfaces\n");
     int i=0;
     while(i<5)
     {
               scanf("%d",&a[i]);
               i++;
     }
     printf("Enter Complexity Values for present inputs-->0 - 10\n");
     i=0;
     while(i<5)
     {
               scanf("%d",&b[i]);
               i++;
     } 
     i=0;
     float t=0;
     while(i<5)
     {
               t=t+(a[i]*b[i]);
               i++;
     }
     printf("Count Total For Given input is-->%f\n",t);
     i=0;
     int s=0;
     printf("Enter values for Ci-->\n");
     while(i<14)
     {
               scanf("%d",&c[i]);
               s=s+c[i];
               i++;
     }
     float vaf=0.65+((float)s/100);
     t=t*vaf;
     printf("Adjusted Function Point is-->%f\n",t);
     printf("Enter Function Points per Month-->");
     int fp=0,cost=0;
     scanf("%d",&fp);
     printf("Enter Cost per month-->");
     scanf("%d",&cost);
     printf("Cost per Fucntion Point is-->%f\n",(float)cost/fp);
     printf("Total Cost is-->%f\n",t*((float)cost/fp));
     printf("Total Resources Used-->%f",t/fp);
}
