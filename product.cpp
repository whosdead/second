/*
Ϊĳ�̵����Ʒ��ƺ��ʵĽṹ�壨product��ÿһ����Ʒ������ţ�number�����ƣ�name���۸�price���ۿۣ�discount��Ϊ��Щ��Ϣѡ����ʵ���������
����������������ʵ�ֶ���Ʒ�Ĳ�����input����ʵ����Ʒ�����룬display������ʾ��Ʒ��Ϣ��Ҫ������������������Ʒ�Ľṹ�壨product��ָ��Ϊ����*/
#include<stdio.h>
#define N 3
//struct Product *p;
struct Product{
	int number;
	char name[20];
	float price;
	float discount;
};
struct Product input();
void display(struct Product *p);
int main()
{
	struct Product product[N];
	int i;
	for(i=0;i<3;i++)
		product[i]=input();
	display(product);
	return 0;
}
struct Product input()
{
	struct Product pt;
	scanf("%d%s%f%f",&pt.number,pt.name,&pt.price,&pt.discount);
	return pt;
}
void display(struct Product *p)
{
	struct Product *p_end;
	p_end=p+N;
	while(p<p_end)
	{
		printf("%d\t%s\t%.2f\t%.2f\n",p->number,p->name,p->price,p->discount);
		p++;
	}
}

