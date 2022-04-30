#include<stdio.h>
int main()
{
    int i=0,n,j=0,sum=0,arr[100];
    scanf("%d",&n);
    label1:
    scanf("%d",&arr[i]);
    i=i+1;
    if(i<n)
    {
        goto label1;
    }
    label2:
    sum=sum+arr[j];
    j=j+1;
    if(j<n)
    {
        goto label2;
    }
    printf("%d",sum);
}