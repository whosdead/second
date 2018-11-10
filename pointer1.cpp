#include<stdio.h>
int main()
{
	int num=10;
	int *pointer=&num;
	printf("num=%d,*pointer=%d\n",num,*pointer);
	*pointer+=15;
	printf("num=%d,*pointer=%d\n",num,*pointer);
	printf("//////////");
	scanf("%d",pointer);
	printf("num=%d,*pointer=%d\n",num,*pointer);
	++*pointer;
	printf("num=%d,*pointer=%d\n",num,*pointer);
	return 0;
}

