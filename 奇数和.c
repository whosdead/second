#include<stdio.h>
int main()
{
    int n,l,m;
    int str[50];
    int sum=1;
    scanf("%d",&n);
    for(l=0;l<n;l++)
    {
        scanf("%d",&str[l]);
    }
    for(l=0;l<n;l++)
        {
            if(str[l]%2!=0)
            sum*=str[l];
        }
    printf("%d\n",sum);
    return 0;
}
