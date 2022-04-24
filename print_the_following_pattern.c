#include<stdio.h>
int main()
{
    int n,i,j,n1=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<(2*n)+1;j++)
        {
            if((j==1)||(j==2*n-1)||(j==n1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        n1=n1+2;
        printf("
");
    }
}