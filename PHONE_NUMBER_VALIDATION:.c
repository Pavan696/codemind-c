#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[10];
    for(i=0;i<10;i++)
    {
        scanf("%[^
]s",&str[i]);
    }
    if(strlen(str)==10)
    {
        if(str[0]==0)
        {
            printf("Invalid");
        }
        else
        {
            printf("Valid");
        }
    }
    else
    {
        printf("Invalid");
    }
}