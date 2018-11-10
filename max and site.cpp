#include<stdio.h>
void find(int b[],int n)
{
	int max,i,k=0;
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(max<b[i])
		{
			max=b[i];
			k=i;
		}
	}
	printf("%d---%d\n",max,k+1);
}
int main()
{
	int a[10],m;
	for(m=0;m<10;m++)
		scanf("%d",&a[m]);
	find(a,10);
	return 0;
}