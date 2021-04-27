#include<stdio.h>
#include<string.h>
void main()
{ 
  int a[100],i,j,k=0,len,m;
  char row[100];
  printf("Enter the Roman no.");
  scanf("%s",&row);
len=strlen(row);

for(i=0;i<len;i++)
{
 if(row[i]=='I')
  a[i]=1;
else if(row[i]=='V')
  a[i]=5;
else if(row[i]=='X')
  a[i]=10;
else if(row[i]=='L')
  a[i]=50;
else if(row[i]=='C')
  a[i]=100;
else if(row[i]=='D')
  a[i]=500;
else if(row[i]=='M')
  a[i]=1000;
 
else{
   printf("Invalid entry");
   exit(0);
}
}

k=a[len-1];

  for(i=len-1;i>0;i--)
  {
   if(a[i]>a[i-1])
    {
      k=k-a[i-1];
    }
    else if(a[i]==a[i-1] || a[i]<a[i-1])
     {
        k=k+a[i-1];
     }
  }
    
    
    printf("\n%d",k);
 
}