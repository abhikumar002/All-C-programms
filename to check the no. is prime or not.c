#include<stdio.h>
int main()
{int n,i,a=0;
printf("enter the no.");
scanf("%d",&n);


for(i=1;i<=n;i++)
{
 if((n%i)==0)
a++;
}
if (a==2)
printf("yes it is a prime no.");
else 
{
printf("no this is not a prime no.because this no. is divisival by");

for(i=1;i<=n;i++)
{
 if((n%i)==0)
printf("%d\n",i);
}
}
 return 0;
}