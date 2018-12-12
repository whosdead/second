#include<stdio.h>
#include<string.h>
int k;
int Max(char (*p)[100])
{
	int a[10],i,max=0;
	for(i=0;i<k;i++)
		a[i]=strlen(p[i]);
	for(i=1;i<=k;i++)
		if(a[i]>a[max])	
			max=i;
	return max;
}
int main()
{
	extern k;
	k=0;
	char str[10][100],ch;
	char (*p)[100];p=str;
	int i=0;
	do{
	scanf("%s",str[k]);	
	k++;
	}while((ch=getchar())!='\n'&&i<10);
	puts(str[Max(p)]);
	return 0;
}