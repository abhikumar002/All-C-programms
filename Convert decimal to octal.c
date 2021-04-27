#include<stdio.h>
#include<string.h>
void main()
{
  int n,i=0,j=0,s=0,h;
 printf("Enter the decimal no. for convert to octal no.\n");
 scanf("%d",&n);
 

 while(n>0)
 {
   j=n%10;
  // if(j==1)
   s+=j*pow(8,i);
   n=n/10;
   i++;
 }
printf("The octal no. is given by\n%d",s);

}