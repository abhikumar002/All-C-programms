#include<stdio.h>

void main()
{ 
  int n;
  float a,b,c,e;
printf("enter 1 for triangle\n");
printf("enter 2 for square\n");
printf("enter 3 for circle\n");
printf("enter 4 for rectangle\n");
printf("enter 5 for parallelogram\n");
scanf("%d",&n);
 
if(n==1)
{
float s,area;
printf("enter the sides of triangle\n");
scanf("%f%f%f",&a,&b,&c);
s=(float)(a+b+c)/2;
area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
printf("area of triangle is %f",area);
}
 

if(n==2)
{
float area;
printf("enter the side of square:\n");
scanf("%f",&a);
area=(float)a*a;
printf("the area of the square is %f",area);
}

if(n==3)
{
float area;
printf("enter the radius of circle:\n");
scanf("%f",&a);
b=(float)(a*a);
area=(float)(3.14*b);
printf("the area of the square is %f",area);
}

if(n==4)
{
float area;
printf("enter the two adjcent sides of rectangle\n");
scanf("%f%f",&a,&b);
area=(float)(a*b);
printf("area of triangle is %f",area);
}

if(n==5)
{
float area;
printf("enter the base and height of parallelogram\n");
scanf("%f%f",&a,&b);
area=(float)(a*b);
printf("area of triangle is %f",area);
}

else
{
printf("invalid choice");
}

}