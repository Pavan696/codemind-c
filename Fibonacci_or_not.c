#include<stdio.h>
int main()
{
int w;
scanf("%d", &w);
int a[1000];
a[0]=0;
a[1]=1;
int i=1,j;
while(a[i]<=w){
i=i+1;
a[i]=a[i-1]+a[i-2];
}
for(j=0;j<=i;j++){

}
if(a[j-2]==w){
printf("True");
}else{
printf("False");
}
}