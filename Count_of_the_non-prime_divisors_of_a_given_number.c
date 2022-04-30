#include<stdio.h>
int main()
{
    int n,i,j,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
            d=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                d++;
            }
        }
         if(d==2)
            {
                e++;
            }
        }
    }
    printf("%d",c-e);
}