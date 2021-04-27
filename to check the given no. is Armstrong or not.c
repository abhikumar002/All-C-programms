#include<stdio.h>
int main()
{
int n,i,sum=0,temp;
printf("enter the no.");
scanf("%d",&n);

temp=n;

while(n>0)
{
i=n%10;
sum+=i*i*i;
n=n/10;
}

if(sum==temp)
{
printf("the given no. is Armstrong number");
}
else
{
printf("the given no. is not Armstrong no.");
}
 return 0;
}
