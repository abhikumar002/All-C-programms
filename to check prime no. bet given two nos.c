#include<stdio.h>
int main()
{ 
int n,i,a=0,m,j;
printf("enter the  two no. to check the prime no. bet them");
scanf("%d%d",&m,&n);


for(i=m;i<=n;i++)
{ 
a=0;
 for(j=1;j<=i;j++)
  {
 if((i%j)==0)
   {
a++;
   }
  }
if (a==2) 
{
printf("%d\n",i); 
}
else 
{
continue;
}
}
 return 0;
}