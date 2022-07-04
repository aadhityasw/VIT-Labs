#include<stdio.h>
struct times
{
    int hour;
    int minute;
    int second;
};
void diffcompute(struct times t1, struct times t2)
{
    if((t1.hour>24)||(t2.hour>24)||(t2.hour<0)||(t1.hour<0)||(t1.minute<0)||(t2.minute<0)||(t1.minute>60)||(t2.minute>60)||(t1.second<0)||(t1.second<0)||(t1.second>60)||(t2.second>60))
    {
        printf("Invalid Input");
    }
    else
    {
        struct times t3;
        int f=0;
        if(t1.second>=t2.second)
        {
            t3.second=t1.second-t2.second;
        }
        else
        {
            t3.second=60+t1.second-t2.second;
            t1.minute--;
        }
        if(t1.minute>=t2.minute)
        {
            t3.minute=t1.minute-t2.minute;
        }
        else
        {
            t3.minute=t1.minute-t2.minute+60;
            t1.hour--;
        }
        if(t1.hour>=t2.hour)
        {
            t3.hour=t1.hour-t2.hour;
        }
        else
        {
            f=12;
            printf("invalid input");
        }
        if(f!=12)
        {
            printf("%d:%d:%d",t3.hour,t3.minute,t3.second);
        }
    }
}
int main()
{
    struct times t1;
    struct times t2;
    scanf("%d",&t1.hour);
    scanf("%d",&t1.minute);
    scanf("%d",&t1.second);
    scanf("%d",&t2.hour);
    scanf("%d",&t2.minute);
    scanf("%d",&t2.second);
    diffcompute(t1,t2);
}
