#include<stdio.h>
int main()
{//(1)	�����ַ���,ͳ�����д�д��ĸ��Сд��ĸ�����֡��ո������ַ��ĸ�����
	char str[100],ch;
	int bigword,smallword,number,space,other,i;
	printf("�����ַ������س�������:\n");
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
	printf("��д��ĸ%d����Сд��ĸ%d��������%d�����ո�%d���������ַ�%d��\n",bigword,smallword,number,space,other);
	return 0;

}
