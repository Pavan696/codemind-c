#include<stdio.h>
int main()
{
    int n,i,c=0,d=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            d++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",d);
}