#include<stdio.h>
void average1(float *p1,float (*p)[5])
{
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			p1[i]+=p[i][j];
}
void average2(float *p2,float (*p)[5])
{
	int i,j;
	for(i=0;i<5;i++)
		for(j=0;j<10;j++)
			p2[i]+=p[j][i];
}
int main()
{
	float score[10][5],aver1[10]={0},aver2[5]={0};
	float (*p)[5],*p1,*p2;p=score;p1=aver1;p2=aver2;
	int i,j;
	for(i=0;i<10;i++)
		for(j=0;j<5;j++)
			scanf("%f",&score[i][j]);
	average1(p1,score);
	for(i=0;i<10;i++)
		printf("第%d个学生的平均分为%.2f\n",i+1,*(p1+i)/5);
	average2(p2,p);
	for(i=0;i<5;i++)
		printf("第%d门课的平均分为%.2f\n",i+1,*(p2+i)/10);
	return 0;
}
