#include<stdio.h>
int GetFactorial(int number);
 main() 
{
 int number,factorial;
 printf("Enter a number for knowing it's factorial\n");
 scanf("%d",&number);
 factorial=GetFactorial(number);
 printf("%d!=%d\n",number,factorial);
 
}
int GetFactorial(int number)
{
 if(number>0) 
{
 return number*GetFactorial(number-1);
 
}
 else 
{
 return 1;
 
}

}
 

