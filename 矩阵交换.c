#include<stdio.h>
#define M 3
#define N 4
int main()
{
    int i,j,a[M][N],b[N][M];
    printf("请输入一个数列的元素:\n");
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
        b[i][j]=a[j][i];
 for(i=0;i<N;i++)
 {
     for(j=0;j<M;j++)
        printf("%d\t",b[i][j]);
     printf("\n");
 }
 return 0;

}
