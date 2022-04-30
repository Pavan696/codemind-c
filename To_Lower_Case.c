#include<stdio.h>
int main()
{
    char str[1000];
    int i,ascii;
    for(i=0;str[i]!=NULL;i++)
    {
    scanf("%[^
]s",str);
    }
    for(i=0;str[i]!=NULL;i++)
    {
        ascii=str[i];
        if(ascii>=65&&ascii<=90)
        {
        printf("%c",str[i]+32);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}