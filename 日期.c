#include<stdio.h>
int main()
{
    int year,day[]={31,28,31,30,31,30,31,31,30,31,30,31},month;
    int i,d,sum=0;
    do
    {
        printf("����һ����ȷ������:\n");
        scanf("%d",&year);
        scanf("%d",&month);
        scanf("%d",&d);
         if(year%4==0&&year%100!=0||year%400==0)
     {
          printf("����������.\n");
          day[1]=29;
     }
     else
        printf("���겻������.\n");
    }
    while(month>12||d>day[month-1]);
     for(i=0;i<(month-1);i++)
     {
         sum+=day[i];
     }
     sum+=d;
     printf("�����Ǹ���ĵ�%d��.",sum);
}
