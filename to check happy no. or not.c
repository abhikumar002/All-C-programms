#include<stdio.h>
int main()
{ 
int n,i,sum,a;
printf("enter the no. to check happy or not\n");
scanf("%d",&n);

while(sum!=1 && sum!=4)
{
sum=0;
while(n>0)
{
a=n%10;
a=pow(a,2);
sum+=a;
n=n/10;
}
n=sum;
}
if(sum==1)
{
printf("the given no. is happy no.\n");
}
else
{
printf("the given no. is unhappy no.\n");
}
 return 0;
}