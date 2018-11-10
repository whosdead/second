#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
	if(a<b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	if(a%b==0)
		return b;
	else
		return gcd(b,a%b);
}
int pfs(int a)
{
	if(pow((int)sqrt(a),2)==a)
		return 1;
	else
		return 0;
}
int main()
{
	int i,j;
	printf("//////////\n");
	printf("**********\n");
	for(i=1;i<100;i++)
		for(j=i+1;j<100;j++)
			if(i*i+j*j<10000&&gcd(i,j)==1&&pfs(i*i+j*j)==1)
				printf("%4d%10d%8d\n",i,j,(int)sqrt(i*i+j*j));
	return 0;
}

