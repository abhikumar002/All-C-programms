#include<stdio.h>
#include<math.h>
int getfactorial(int number);
main()
{
 int i,n,a,sum=0,temp1,temp2;
 printf("Enter number till n to check the strong no's.\n");
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
{
 sum=0;
 temp1=i;
 temp2=i;
 
while(temp1>0)
 {
 a=temp1%10;
sum=sum+getfactorial(a);
 temp1=temp1/10;

}
 if(sum==temp2) 
{
 printf("%d\n",sum);
}
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


    