#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
int n,i;
float sum=0,x,c,a[20];
printf("enter value of x\n");
scanf("%f",&x);
printf("enter the order of polynomial\n");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
printf("enter the coff. of x^%d\n",i);
scanf("%f",&a[i]);
}

for(i=n;i>=0;i--)
{
if(i>0)
  printf("%.2f*x^%d+",a[i],i);
else
  printf("%.2f*x^%d=",a[i],i);
}


for(i=n;i>=0;i--)
{
sum+=a[i]*pow(x,i);
}
printf("%f",sum);
return 0;
}