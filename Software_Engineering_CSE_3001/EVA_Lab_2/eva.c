#include<stdio.h>
int main()
{
     float ac,ev,pv,spi,bac,etc,vac,per,cv,sv,cpi,eac;
     printf("Enter Budget at Completion-->");
     scanf("%f",&bac);
     printf("Enter Percentage completed after 3 days-->");
     scanf("%f",&per);
     printf("Enter Actual Cost-->");
     scanf("%f",&ac);
     pv=bac*(.75);
     ev=bac*(per);
     spi=ev/pv;
     printf("Planned Value-->%f\n",pv);
     printf("Earned Value-->%f\n",ev);
     printf("Scheduled Performance Index-->%f\n",spi);
     cv=ev-ac;
     printf("Cost Variance-->%f\n",cv);
     sv=ev-pv;
     printf("Schedule Variance-->%f\n",sv);
     cpi=ev/ac;
     printf("Cost Performance Index-->%f\n",cpi);
     eac=ac+(bac-ev)/cpi;
     printf("Estimate at Completion-->%f\n",eac);
     etc=eac-ac;
     printf("Estimate to complete-->%f\n",etc);
     vac=bac-eac;
     printf("Variance at Completion-->%f\n",vac);
     return 0;
}
