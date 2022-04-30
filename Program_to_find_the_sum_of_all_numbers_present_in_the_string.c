#include<stdio.h>
int main()
{
    char str[1000];
    int i,j=0,sum=0,k,arr[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            arr[j]=str[i]-48;
            j++;
        }
    }
    for(k=0;k<j;k++)
    {
        sum=sum+arr[k];
    }
    printf("%d",sum);
}