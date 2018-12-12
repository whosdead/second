#include<stdio.h>
int dft(int a,char *p);
int main()
{
	char str[50];
	char *p;p=str;
	int i=0;
	gets(str);
	while(str[i]!='\0'){p++;i++;}p--;
	dft(i,p);
	return 0;
}
int dft(int a,char *p)
{
	if(a==0)
	{
		printf("\n");
		return 0;
	}
	else
	{
		printf("%c",*p);
		return dft(a-1,p-1);
	}
}
