
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()


{
float a,b,c,root1,root2;
float real,imaginary,discriminent;
printf("Enter the a,b and c in quaradic equation:\n");
scanf("%f %f %f",&a,&b,&c);
if(a==0 || b==0 || c==0)
{
printf("error: roots are not determined");
}
else{
discriminent=(b*b)-(4.0*a*c);

if(discriminent<0)
{
//roots are imaginaries and distint
real=-b/(2.0*a);
imaginary=(sqrt(abs(discriminent))/(2.0*a));
printf("%f+i %f\n",real,imaginary);
printf("%f-i %f\n",real,imaginary);


}

if(discriminent==0)
{
//roots are real and equal
root1=-b/(2.0*a);
root2=root1;
printf("%f\n",root1);
printf("%f",root2);


}

if(discriminent>0)
{
//roots are real and distint
root1= (-b+sqrt(discriminent)/2.0*a);
root2= (-b-sqrt(discriminent)/2.0*a);
printf("%f\n ",root1);
printf("%f",root2);


}
}
return 0;

}

    