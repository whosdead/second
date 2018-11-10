#include<stdio.h>
int main()
{
	int i,j=0;
	for(i=10000;i<100000;i++)
	{
		if((i%100)%6==0&&(i/1000)%6==0&&(i/100)%10%6==0)
		{
			printf("%10d",i);
			j++;
		}
	}
	printf("\n¹²%d¸ö\n",j);
	return 0;
}
