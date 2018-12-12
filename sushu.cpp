#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,flag,n=0,a[1000];
	for(i=2;i<=1000;i++)
	{
		flag=1;
		if(i>3)
		{
		for(j=2;j<=(int)sqrt(i);j++)
			if(i%a[j-2]==0)
				flag=0;
		}
	    if(flag)
		{
			a[n]=i;
			printf("%5d",i);
			n++;
		}
	}
	return 0;
}

