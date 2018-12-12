#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int a[])
{
	int i,j=0,temp;
	for(i=0;i<10;i++)
	{
		j=i;
		while(a[j]<a[j-1]&&j>0){
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}
}
void put(int a[])
{
	int i;
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
int main()
{
	int i,a[10],*p;
	p=a;
	srand(time(0));
	for(i=0;i<10;i++)
		a[i]=rand()%91+10;
	sort(p);
	put(p);
	return 0;
}
