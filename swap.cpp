#include<stdio.h>
void swap1(int x,int y);
void swap2(int *x,int *y);
void swap3(int *x,int *y);
int main()
{
	int a,b;
	int *pt1,*pt2;
	printf("����������:\n");
	scanf("%d%d",&a,&b);
	printf("����ǰ:a=%d,b=%d\n",a,b);
	swap1(a,b);
	printf("ִ��swap1��:a=%d,b=%d\n",a,b);
	pt1=&a;pt2=&b;
	swap2(pt1,pt2);
	printf("ִ��swap2��:a=%d,b=%d\n",a,b);
	swap3(pt1,pt2);
	printf("ִ��swap3��:a=%d,b=%d\n",a,b);
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