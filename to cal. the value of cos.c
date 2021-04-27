
#include<stdio.h>

#include<math.h>
int factorial(int);
main()
{
 int accuracy,count=0,k=0;
 float cosine=0,x,temp;
printf("enter the value in degree for Cal. value in sun mathimatically:");
 scanf("%f",&x);
temp=x;
x=(float)x*(3.14159/180);
printf("enter the value in term for more accuracy at least 3 times:");
 scanf("%d",&accuracy);

do{

//cos=1-x^2/2!+x^4/4!...
if(count%2==0)
{
cosine=(float)cosine+(pow(x,k)/factorial(k));
}

if(count%2==1)
{
cosine=(float)cosine-(pow(x,k)/factorial(k));
}
count++;
k=k+2;

}while(count<=accuracy);
  
printf("cos(%f)=%f calculated mathematically\n",temp,cosine);
printf("cos(%f)=%f calculated using library directory\n",temp,cos(x));
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



    