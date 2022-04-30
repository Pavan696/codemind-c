#include<stdio.h>
#include<math.h>
int main()
{
    int n,ivar,i,arr[100];
    float fvar;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fvar=sqrt(arr[i]);
        ivar=fvar;
        if(ivar==fvar)
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
    }
}