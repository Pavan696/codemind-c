#include<stdio.h>
int main()
{
    int n,div=0,temp,i;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            div=div+i;
        }
    }
    if(div==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}