
#include<stdio.h>
int fun(int a[],int n,int sum);
int main()
{
int n,a[20],i,sum=0;
printf("enter the no. of Array elements\n");
scanf("%d",&n);

printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
fun(a,n,sum);
}


int fun(int a[],int n,int sum)
{

if(n>=0)
{
if((a[n]%2)==0)
{
 sum+=(a[n]);
}
fun(a,n-1,sum);
}
else 
{
printf("the sum is %d",sum);
return 0;
}
}