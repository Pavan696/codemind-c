#include<stdio.h>
int main()
{
    int n,arr[100],brr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i],&brr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]+brr[i]);
        printf("
");
    }
}