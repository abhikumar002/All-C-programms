
#include<stdio.h>

#include<math.h>
int factorial(int);
main()
{
 int accuracy,count=0,k=1;
 float sine=0,x,temp;
printf("enter the value in degree for Cal. value in sun mathimatically:");
 scanf("%f",&x);
temp=x;
x=(float)x*(3.14159/180);
printf("enter the value in term for more accuracy at least 3 times:");
 scanf("%d",&accuracy);

do{
//sin=x/1!-x^3/3!+x^5/5!-...
if(count%2==0)
{
sine=(float)sine+(pow(x,k)/factorial(k));
}

if(count%2==1)
{
sine=(float)sine-(pow(x,k)/factorial(k));
}
count++;
k=k+2;

}while(count<=accuracy);
  
printf("Sine(%f)=%f calculated mathematically\n",temp,sine);
printf("Sine(%f)=%f calculated using library directory\n",temp,sin(x));
}

 int factorial(int val)
{ 
 int i,factorial=1;
for(i=1;i<=val;i++)
{
 factorial=factorial*i;
}

 return(factorial);
}



    