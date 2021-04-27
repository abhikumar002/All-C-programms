#include<stdio.h>
int main()
{
int n,i,sum=0,a;
printf("enter the no. to know it is perfect or not :");
scanf("%d",&n);


for(i=1;i<n;i++)
{

if(n%i==0)
{
sum+=i;
}
}
if(sum==n)
{
printf("yes the given no. is perfect no.");
}    
else{
printf("No, the given no. is not perfect no.");
}

 return 0;
}
    