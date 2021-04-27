#include<stdio.h>
#include<string.h>
void main()
{
  int n,i,j=0,s=0,h;
 printf("Enter the no. for convert to binary no.\n");
 scanf("%d",&n);
 
 while(n>0)
 {
   i=n%2;
   s=(s*10)+i;
   n=n/2;
 }

while(s>0)
{
  h=s%10;
  j=(j*10)+h;
  s=s/10;
}
printf("The Binary no. is given by\n%d",j);
}