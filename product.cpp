/*
为某商店的商品设计合适的结构体（product）每一种商品包含编号（number）名称（name）价格（price）折扣（discount）为这些信息选择合适的数据类型
建立两个函数，以实现对商品的操作，input函数实现商品的输入，display函数显示商品信息，要求这两个函数都以商品的结构体（product）指针为参数*/
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

