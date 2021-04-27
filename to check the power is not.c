
#include<stdio.h>
int main()
{
int n,i,sum=0,j,a;
printf("enter the no.:");
scanf("%d",&n);

printf("enter the no. to check the power is not  :\n",n);
scanf("%d",&a);

while((n==0) || (a==1))
{
printf("plz enter other no. other than 0 and 1");
exit(0);
}
while(n>1)
{
if(n%a!=0)
{
printf("the given no. is not power of %d",a);
exit(0);
}
n=n/a;
} 
printf("the given no. is power of %d",a);
 return 0;
}
