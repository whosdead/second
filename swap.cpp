#include<stdio.h>
void swap1(int x,int y);
void swap2(int *x,int *y);
void swap3(int *x,int *y);
int main()
{
	int a,b;
	int *pt1,*pt2;
	printf("输入两个数:\n");
	scanf("%d%d",&a,&b);
	printf("交换前:a=%d,b=%d\n",a,b);
	swap1(a,b);
	printf("执行swap1后:a=%d,b=%d\n",a,b);
	pt1=&a;pt2=&b;
	swap2(pt1,pt2);
	printf("执行swap2后:a=%d,b=%d\n",a,b);
	swap3(pt1,pt2);
	printf("执行swap3后:a=%d,b=%d\n",a,b);
	return 0;
}
void swap1(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap2(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void swap3(int *x,int*y)
{
	int *temp;
	temp=x;
	x=y;
	y=temp;
}