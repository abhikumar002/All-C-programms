
#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int n=0,i,c;
float sum=0,a1,a2,l;

printf("Enter the first two nos. to find common difference\n");
 scanf("%f%f",&a1,&a2);

c=a2-a1;

printf("Enter the last term in the series");
scanf("%f",&l);

while(a1<=l) 
{
 sum+=(float)a1;

if(a1<l)
{
printf("%.1f+ ",a1);
}
else
{
printf("%.1f= ",a1);
}
a1+=c;
n++;
}
printf("%.2f\n",sum);
printf("the total no. of terms in series is %d\n",n);

}
