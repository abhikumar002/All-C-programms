
#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int n,i=1,j;
int sum=0,a1,a2,l,r;

printf("Enter the first two nos. to find common ratio\n");
 scanf("%d%d",&a1,&a2);

r=a2/a1;

printf("Enter the term in the series\n");
scanf("%d",&n);

while(i<=n) 
{
 sum+=a1;
if(i<n)
{
printf("%d + ",a1);
}
else
{
printf("%d = ",a1);
}

if(i<n)
{ 
a1=(a1*r);
}

i+=1;
}

printf("%d\n",sum);
printf("the last terms in series is %d\n",a1);

}
    