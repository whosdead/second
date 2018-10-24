#include<stdio.h>
#define M 2
#define N 3
#define L 2
int main()
{
    int a[M][N],b[N][L],c[M][L],i,j,k;
    printf("请输入第一个数列的元素:\n");
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        scanf("%d",&a[i][j]);
    printf("请输入第二个数列的元素:\n");
    for(i=0;i<N;i++)
        for(j=0;j<L;j++)
        scanf("%d",&b[i][j]);

   for(i=0;i<M;i++)
            for(j=0;j<L;j++)
   {
       c[i][j]=0;
       for(k=0;k<N;k++)
       c[i][j]+=a[i][k]*b[k][j];
   }
   printf("---------\n");
   for(i=0;i<M;i++)
   {
       for(j=0;j<L;j++)
        printf("%3d",c[i][j]);
       printf("\n");
   }
   return 0;
}
