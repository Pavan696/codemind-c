#include<stdio.h>
int main()
{
    int n,d,sqrd,rev=0,sqr,revsqr,sqrrev=0;
    scanf("%d",&n);
    sqr=n*n;
    while(n!=0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    revsqr=rev*rev;
    while(revsqr!=0)
    {
        sqrd=revsqr%10;
        sqrrev=(sqrrev*10)+sqrd;
        revsqr=revsqr/10;
    }
    if(sqr==sqrrev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}