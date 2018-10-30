#include<stdio.h>
int fac(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
		result*=i;
	return result;
}
int main()
{
	int m,n;
	printf("请输入两个整数n和m(n>m):\n");
	scanf("%d%d",&n,&m);
	if(n<m||n==1||m==1)
	{
		printf("数据输入错误！！");
		return 0;
	}
	printf("计算结果为:%d\n",fac(n)/(fac(m)*fac(n-m)));
	return 0;
}