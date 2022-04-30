#include<stdio.h>
int main()
{
    int n,fact=1,d,arr[100],i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=arr[i];j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
        fact=1;
    }
}