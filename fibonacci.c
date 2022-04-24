#include<stdio.h>
int main()
{
    int n,i,arr[100];
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        arr[0]=0;
        arr[1]=1;
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}