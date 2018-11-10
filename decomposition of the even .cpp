#include<stdio.h>
#include<math.h>
int prime(int num)
{
	int i,flag=1;
	for(i=3;i<=(int)sqrt(num);i+=2)
		if(num%i==0)
		{
			flag=0;
			break;
		}
	return flag;
}
int main()
{
	int num,i;
	printf("/+/+/+/+/");
	scanf("%d",&num);
	if(num%2!=0||num<0){
		printf("-*-*-*-*-\n");
		return 0;
	}
	for(i=3;i<num/2;i+=2)
	{
		if(prime(i)==1&&prime(num-i)==1)
		{
			printf("%d=%d+%d\n",num,i,num-i);
		}
	}
	return 0;
}