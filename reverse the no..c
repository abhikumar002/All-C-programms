#include<stdio.h>
int main()
{int a,b,sum=0;
printf("enter the no.");
scanf("%d",&a);

while(a>0)
{
b=a%10;
printf("%d",b);
a=a/10;

}

 return 0;
}