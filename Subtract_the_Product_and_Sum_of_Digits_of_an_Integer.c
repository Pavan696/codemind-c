#include<stdio.h>
int main()
{
    int n,d,i=0,mul=1,k;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        i=i+d;
        mul=mul*d;
    }
    k=mul-i;
    printf("%d",k);
    return 0;
    
}