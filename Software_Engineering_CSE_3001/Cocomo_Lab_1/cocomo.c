#include<stdio.h>
#include<math.h>
#define sal 75000.0
void basic()
{
     int a1;
     printf("Enter 1 for Organic..\nEnter 2 for Semi-Detached..\nEnter 3 for Embedded..\n");
     scanf("%d",&a1);
     if(a1==1)
     {
             float a=2.4,b=1.05;
             float effort,loc;
             printf("Enter LOC value-->");
             scanf("%f",&loc);
             effort=a*pow(loc,b);
             float time=2.5*pow(effort,0.38);
             printf("Effort is--%f\nDevelopment Time is-->%f\n",effort,time);
             float cost=time*sal;
             printf("Total Cost is-->%f\n",cost);
             printf("Average Productivity-->%f\n",(loc/effort));
     }
     if(a1==2)
     {
             float a=3,b=1.12;
             float effort,loc;
             printf("Enter LOC value-->");
             scanf("%f",&loc);
             effort=a*pow(loc,b);
             float time=2.5*pow(effort,0.35);
             printf("Effort is--%f\nDevelopment Time is-->%f\n",effort,time);
             float cost=time*sal;
             printf("Total Cost is-->%f\n",cost);
             printf("Average Productivity-->%f\n",(loc/effort));
     }
     if(a1==3)
     {
             float a=3.6,b=1.20;
             float effort,loc;
             printf("Enter LOC value-->");
             scanf("%f",&loc);
             effort=a*pow(loc,b);
             float time=2.5*pow(effort,0.32);
             printf("Effort is--%f\nDevelopment Time is-->%f\n",effort,time);
             float cost=time*sal;
             printf("Total Cost is-->%f\n",cost);
             printf("Average Productivity-->%f\n",(loc/effort));
     }
}
void inter()
{
     int a1,b1[15],eaf=1;
     printf("Enter 1 for Organic..\nEnter 2 for Semi-Detached..\nEnter 3 for Embedded..\n");
     scanf("%d",&a1);
     if(a1==1)
     {
             float a=3.2,b=1.05;
             float effort,loc;
             printf("Enter LOC value-->");
             scanf("%f",&loc);
             printf("Enter 15 COST DRIVER values-->\n");
             for(int i=0;i<14;i++)
             {
                     scanf("%d",&b1[i]);
                     eaf=eaf*b1[i];
             }        
             effort=a*pow(loc,b)*eaf;
             float time=2.5*pow(effort,0.38);
             printf("Effort is--%f\nDevelopment Time is-->%f\n",effort,time);
             float cost=time*sal;
             printf("Total Cost is-->%f\n",cost);
             printf("Average Productivity-->%f\n",(loc/effort));
     }
     if(a1==2)
     {
             float a=3,b=1.12;
             float effort,loc;
             printf("Enter LOC value-->");
             scanf("%f",&loc);
             printf("Enter 15 COST DRIVER values-->\n");
             for(int i=0;i<14;i++)
             {
                     scanf("%d",&b1[i]);
                     eaf=eaf*b1[i];
             }        
             effort=a*pow(loc,b)*eaf;
             float time=2.5*pow(effort,0.35);
             printf("Effort is--%f\nDevelopment Time is-->%f\n",effort,time);
             float cost=time*sal;
             printf("Total Cost is-->%f\n",cost);
             printf("Average Productivity-->%f\n",(loc/effort));
     }
     if(a1==3)
     {
             float a=2.8,b=1.20;
             float effort,loc;
             printf("Enter LOC value-->");
             scanf("%f",&loc);
             effort=a*pow(loc,b)*eaf;
             printf("Enter 15 COST DRIVER values-->\n");
             for(int i=0;i<14;i++)
             {
                     scanf("%d",&b1[i]);
                     eaf=eaf*b1[i];
             }   
             float time=2.5*pow(effort,0.32);
             printf("Effort is--%f\nDevelopment Time is-->%f\n",effort,time);
             float cost=time*sal;
             printf("Total Cost is-->%f\n",cost);
             printf("Average Productivity-->%f\n",(loc/effort));
     }
}
int main()
{
     int a;
     printf("Enter 1 for Basic Model..\nEnter 2 for Intermediate Model..\n");
     scanf("%d",&a);
     if(a==1)
     basic();
     if(a==2)
     inter();
}     

