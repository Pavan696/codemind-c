#include<stdio.h>
int main()
{
    int n,arr[100],d,i=0,j,k,temp,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        arr[i]=d;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
            if(arr[j]==arr[k])
            {
                c++;
            }
        }
    }
    if(c==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}