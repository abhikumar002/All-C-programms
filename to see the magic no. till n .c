#include<stdio.h>
#include<math.h>
int getthesum(int num);
int getthereverse(int sumofdigits);
main()
{
    int i,num,reverse,sumofdigits;
    printf("Enter number to check the magic no.\n");
    scanf("%d",&num);
 
for(i=1;i<=num;i++)
{
sumofdigits= getthesum(i);       
reverse= getthereverse(sumofdigits); 
     
    
    if(reverse*sumofdigits==i)
    {
    printf("%d\n",i);
    }
}
}

int getthesum(int num)
{
    int x,sum=0;
    
    while(num>0)
    {
     x=num%10;
     sum=sum+x;
     num=num/10;
    }
    return sum;
}


int getthereverse(int n)
{
    int x,rev=0;
    
    while(n>0)
    {
     x=n%10;
     rev=rev*10+x;
     n=n/10;
    }
    return rev;
}


    