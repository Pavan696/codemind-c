#include<stdio.h>
int main()
{
    int n,i,arr[100],d,j,c=0,rev=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            rev=rev*10+d;
            arr[i]=arr[i]/10;
        }
        if(temp==rev)
        {
            printf("True");
            printf("
");
        }
        else
        {
            printf("False");
            printf("
");
        }
        rev=0;
    }
}