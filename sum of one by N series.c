
#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int n,i;
float sum=0;

printf("Enter the no.\n");
 scanf("%d",&n);

for(i=1;i<=n;i++)
{
 sum+=(float)1/i;
}

for(i=1;i<=n;i++)
{ 
if(i<n)
printf("1/%d+ ",i);
else
printf("1/%d= ",i);
}
printf("%f\n",sum);
}

