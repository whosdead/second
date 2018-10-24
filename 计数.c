#include<stdio.h>
int main()
{//(1)	输入字符串,统计其中大写字母、小写字母、数字、空格及其他字符的个数。
	char str[100],ch;
	int bigword,smallword,number,space,other,i;
	printf("输入字符串（回车结束）:\n");
	gets(str);
	bigword=smallword=number=space=other=i=0;

	while((ch=str[i])!='\0')
	{
		if(ch==' ')
			space++;
		else if(ch>='a'&&ch<='z')
			smallword++;
		else if(ch>='A'&&ch<='Z')
			bigword++;
		else if(ch>='0'&&ch<='9')
			number++;
		else 
			other++;
						
		i++;
	}
	printf("大写字母%d个，小写字母%d个，数字%d个，空格%d个，其他字符%d个\n",bigword,smallword,number,space,other);
	return 0;

}
