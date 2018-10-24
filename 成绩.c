#include<stdio.h>
#define M 3
#define N 4
int main()
{
    int i,j,max,row,col;
    float score[M][N],average[M],saverage[N];
    printf("输入%d个学生%d门课的成绩:\n",M,N);
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        scanf("%f",&score[i][j]);
    for(i=0;i<3;i++)
    {
        average[i]=0.0;
        for(j=0;j<4;j++)
        average[i]+=score[i][j];
        average[i]=average[i]/N;
    }
    for(j=0;j<4;j++)
    {
        saverage[j]=0.0;
        for(i=0;i<3;i++)
        saverage[j]+=score[i][j];
        saverage[j]=saverage[j]/M;
    }
    for(i=0;i<3;i++)
    printf("第%d个学生的平均分为:%.2f\n",i+1,average[i]);
    for(j=0;j<4;j++)
        printf("第%d门课的平均分为:%.2f\n",j+1,saverage[j]);
    max=score[0][0];
    row=col=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
            if(score[i][j]>max)
           {
                max=score[i][j];
                row=i;
                col=j;
           }
           printf("第%d个学生的最高分为第%d门课.\n",row+1,col+1);
    }
    printf("三个学生的最高分为第%d个学生第%d门课程.\n",row+1,col+1);
    return 0;
}
