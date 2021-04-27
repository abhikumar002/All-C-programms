#include<stdio.h>
int main()
{
int n,i,sum=0,j;
printf("enter the no. till n:");
scanf("%d",&n);

printf("the perfect no. is between and %d is  :\n",n);

for(i=1;i<=n;i++)
{
sum=0;
for(j=1;j<i;j++)
{
if(i%j==0)
{
sum+=j;
}
} 
if(sum==i)
{
printf("%d\n",i);
}
}


 return 0;
}
    