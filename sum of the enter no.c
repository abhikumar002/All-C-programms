#include<stdio.h>
int main()
{int a,b,sum=0;
printf("enter the no.");
scanf("%d",&a);

while(a>0)
{
b=a%10;
a=a/10;
sum+=b;
}
printf("%d",sum);
 return 0;
}