
#include<stdio.h>
#include<string.h>
#include<math.h>
int fun(int);
main()
{
int n,i;
float sum=0;

printf("Enter the no.\n");
 scanf("%d",&n);

for(i=1;i<=n;i++)
{
 sum+=(float)i/fun(i);
}

for(i=1;i<=n;i++)
{ 
if(i<n)
printf("1/%d!+ ",i);
else
printf("1/%d!= ",i);
}
printf("%f\n",sum);
}

int fun(int val)
{
 int i,fact=1;
for(i=1;i<=val;i++)
{
fact*=i;

}

return fact;
}