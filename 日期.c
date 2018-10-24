#include<stdio.h>
int main()
{
    int year,day[]={31,28,31,30,31,30,31,31,30,31,30,31},month;
    int i,d,sum=0;
    do
    {
        printf("输入一个正确年月日:\n");
        scanf("%d",&year);
        scanf("%d",&month);
        scanf("%d",&d);
         if(year%4==0&&year%100!=0||year%400==0)
     {
          printf("该年是闰年.\n");
          day[1]=29;
     }
     else
        printf("该年不是闰年.\n");
    }
    while(month>12||d>day[month-1]);
     for(i=0;i<(month-1);i++)
     {
         sum+=day[i];
     }
     sum+=d;
     printf("该天是该年的第%d天.",sum);
}
