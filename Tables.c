#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d%d",&n,&r);
    for(i=0;i<=r;i++)
    {
        if(i%2==1)
           printf("%d x %d = %d
",n,i,n*i);
    }
}