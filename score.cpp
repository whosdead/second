#include<stdio.h>
int main()
{
	int n,i;
	float score,max,min,sum=0;
	float a[100];
	printf("///////////\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		else 
			if(a[i]<min)
			min=a[i];
	}
	for(i=0;i<n;i++)
		sum+=a[i];
	score=(sum-max-min)/(n-2);
	printf("%.2f\n",score);
	return 0;
}
