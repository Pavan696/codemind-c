#include<stdio.h>
int main()
{
    int n,d,pos=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        if(pos<d)
        {
            pos=d;
        }
    }
    printf("%d",pos);
    return 0;
}