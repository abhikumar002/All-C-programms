#include<stdio.h>
#include<math.h>
int getfactorial(int number);
main()
{
 int i,n,j,a,sum=0,temp,fact=1;
 printf("Enter number to check the no. is strong or not:\n");
 scanf("%d",&n);
 
temp=n;
 while(n>0) 
{
 a=n%10;
sum=sum+getfactorial(a);
 n=n/10;

}
 if(temp==sum) 
{
 printf("the given no. is strong no.\n");
 
}
 else 
{
 printf("the given no. is not strong no.\n");
}
}
int getfactorial(int number)
{  
int factorial=1,i;
 for(i=1;i<=number;i++)
{
 factorial=factorial*i;
}
return factorial;
}


    