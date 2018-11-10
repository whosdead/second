#include<stdio.h>
#define N 10
int main()
{
  int a[N],i,j,temp;
printf("输人待排序序列的值:\n");
for(i=0;i<N;i++)
  scanf("%d",&a[i]);
for(j=0;j<N-1;j++)
  for(i=0;i<N-1-j;i++)
    if(a[i]>a[i+1])
  {
  temp=a[i]; a[i]=a[i+1]; a[i+1]=temp;
  }
printf("排序后的结果为:n");
for(i=0; i<N; i++)
  printf("%5d",a[i]);
printf("\n");
}
