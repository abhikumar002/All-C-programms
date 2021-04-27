#include<stdio.h>
int main()
{int a,b,c,rev=0;
printf("enter the no.");
scanf("%d",&c);
a=c;
while(a>0)
{
b=a%10;
rev=rev*10+b;
a=a/10;
}
 if(c==rev)

printf("yes, your given no. is palindrome.");
else
printf("No,your given no. is not a palindrome.");


 return 0;
}