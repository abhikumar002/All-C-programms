#include<stdio.h>
#include<conio.h>
int GetGCD(int temp1,int temp2);
void main()
{
int num1,num2,gcd,lcm,x,c,b;
printf("Enter number 1 and number 2\n");
scanf("%d%d",&num1,&num2);

gcd=GetGCD(num1,num2);
lcm=(num1*num2)/gcd;
printf("gcd is %d\n",gcd);
printf("Lcm is %d\n",lcm);

}
int GetGCD(int temp1,int temp2)
{
 if(temp2!=0) 
{
 GetGCD(temp2,temp1%temp2);
 
}
 else 
{
 return(temp1);
 
}

}


    