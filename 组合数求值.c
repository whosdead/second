#include<stdio.h>
int main()
{
  int m,n,fac1,fac2,fac3,i;
  printf("������������n��m(n>m):");
  scanf("%d%d",&n,&m);
  if(n<m||n<1||m<1)
  {
    printf("�����������\n");
    return 0;
  }
  fac1=fac2=fac3=1;
  for(i=1;i<=m;i++)
  fac1*=i;
  for(i=1;i<=n;i++)
  fac2*=i;
  for(i=1;i<=n-m;i++)
  fac3*=i;
  printf("������Ϊ:%d\n",fac2/(fac1*fac3));
  return 0;
}