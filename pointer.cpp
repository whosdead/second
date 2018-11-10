#include<stdio.h>
int main()
{
  int x,*pointer=NULL;
  printf("//////////");
  scanf("%d",&x);
  printf("x值：%d\n",x);
  printf("x地址:%d",&x);
  pointer=&x;
  printf("指针变量所储存单元的值为:%d\n",pointer);
  printf("指针变量的值为:%x\n",pointer);
  printf("指针变量的地址为%x\n",&pointer);
  printf("指针变量所占的字节为%d\n",sizeof(pointer));
  return 0;
}