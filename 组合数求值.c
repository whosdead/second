#include<stdio.h>
int main()
{
  int m,n,fac1,fac2,fac3,i;
  printf("请输入两个数n和m(n>m):");
  scanf("%d%d",&n,&m);
  if(n<m||n<1||m<1)
  {
    printf("数据输入错误\n");
    return 0;
  }
  fac1=fac2=fac3=1;
  for(i=1;i<=m;i++)
  fac1*=i;
  for(i=1;i<=n;i++)
  fac2*=i;
  for(i=1;i<=n-m;i++)
  fac3*=i;
  printf("计算结果为:%d\n",fac2/(fac1*fac3));
  return 0;
}