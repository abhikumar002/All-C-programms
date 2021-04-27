#include<stdio.h>
int main()
{ 
int n,i,a=0,prime=1,j;
printf("enter the no.");
scanf("%d",&n);


for(i=1;i<=n;i++)
{ 
 a=0;
 for(j=1;j<=i;j++)
    {
 if((i%j)==0)
 {
a++; 
 }
    }
if(a==2)
        {
if(prime<i)
{
  prime=i;
}
        }


}

printf("%d\n", prime);


 return 0;
}