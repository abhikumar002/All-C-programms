#include<stdio.h>
int main()
{ 
int n,i,a=0,prime,j;
printf("enter the no.");
scanf("%d",&n);


for(i=1;i<=n;i++)
{ 
 for(j=1;j<i;j++)
{
 if((i%j)==0)
{
a++;
}
}
}

printf("%d\n", prime);


 return 0;
}