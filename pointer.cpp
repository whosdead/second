#include<stdio.h>
int main()
{
  int x,*pointer=NULL;
  printf("//////////");
  scanf("%d",&x);
  printf("xֵ��%d\n",x);
  printf("x��ַ:%d",&x);
  pointer=&x;
  printf("ָ����������浥Ԫ��ֵΪ:%d\n",pointer);
  printf("ָ�������ֵΪ:%x\n",pointer);
  printf("ָ������ĵ�ַΪ%x\n",&pointer);
  printf("ָ�������ռ���ֽ�Ϊ%d\n",sizeof(pointer));
  return 0;
}