#include<stdio.h>
int main()
{
	int a,b,c,i;
	for(i=100;i<1000;i++)
	{

	c=i%10;
	b=(i/10)%10;
	a=i/100;
	if((a*a*a+b*b*b+c*c*c)==i)
		printf("%5d",i);
	}
	printf("\n");
	return 0;
}