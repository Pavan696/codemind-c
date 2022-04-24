#include<stdio.h>
int main()
{
    int n,d,temp,dig=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        dig=dig+d;
        n=n/10;
    }
    if(temp%dig==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}