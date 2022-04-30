#include<stdio.h>
int main()
{
	int n,temp,d,fact=1,sum=0,j;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		fact=1;
		d=n%10;
		for(j=1;j<=d;j++)
		{
			fact=fact*j;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("The number %d is a strong number",temp);
	}
	else
	{
		printf("The number %d is not a strong number",temp);
	}
}