#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a[10],i,j,num[100];	
	for(i=0;i<10;i++)
		a[i]=0;
	srand(time(0));
	for(i=0;i<100;i++)
		num[i]=rand()%100;
	for(i=0;i<=99;i++)
	{
		switch(num[i]%10)
		{
		case 0: a[0]++;break;
		case 1: a[1]++;break;
		case 2: a[2]++;break;
		case 3: a[3]++;break;
		case 4: a[4]++;break;
		case 5: a[5]++;break;
		case 6: a[6]++;break;
		case 7: a[7]++;break;
		case 8: a[8]++;break;
		case 9: a[9]++;break;
		}
	}
	for(i=0;i<10;i++)
		printf("%d:%d\n",i,a[i]);
	return 0;
}