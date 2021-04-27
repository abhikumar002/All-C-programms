
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
  int n;
printf("Choose one of them\n");
printf("1 - binary to decimal\n2 - binary to octal\n3 - binary to hexadecimal\n4 - octal to binary\n5 - octal to decimal\n6 - octal to hexadecimal\n7 - decimal to binary\n8 - decimal to octal\n9 - decimal to hexadecimal\n10 - hexadecimal to binary\n11 - hexadecimal to octal\n12 - hexadecimal to decimal\n");

scanf("%d",&n);
if(n==1)
{ 
 int b,i=0,s=0,j;
printf("Enter binary --\n");
scanf("%d",&b);
 while(b>0)
 {
   j=b%10;
   if(j==1)
   s+=pow(2,i); 
   b=b/10;
   i++;
 }
printf("The decimal no. is given by\n%d",s);

}

if(n==2)
{ 
 int b,i=0,s=0,d=0,j,k=0;
printf("Enter binary --\n");
scanf("%d",&b);
 while(b>0)
 {
   j=b%10;
   if(j==1)
   d+=pow(2,i); 
   b=b/10;
   i++;
 }
while(d>0)
 {
   j=d%10;
   s+=j*pow(8,k);
   d=d/10;
   k++;
 }
printf("The octal no. is given by\n%d",s);

}

if(n==3) 
{
  int b,i=0,s=0,j;
printf("Enter binary --\n");
scanf("%d",&b);
 while(b>0)
 {
   j=b%10;
   if(j==1)
   s+=pow(2,i); 
   b=b/10;
   i++;
 }
printf("The decimal no. is given by\n%d\n",s);

  int d,hex[100],l=0,m=0,h[100];
 d=s;
 while(d>0)
 {
   m=d%16;
    if(m<10)
    {
      hex[l]=m+48;
    }
    else
    {
      hex[l]=m+55;
    }
    l++;  
     d=d/16;
 }
printf("The hexadecimal no. is given by\n");
for(i=l-1;i>=0;i--)
{
  printf("%c",hex[i]);
 }
}


if(n==8)
{
int d,i=0,j=0,s=0,h;
 printf("Enter decimal -- \n");
 scanf("%d",&d);
 

 while(d>0)
 {
   j=d%10;
  // if(j==1)
   s+=j*pow(8,i);
   d=d/10;
   i++;
 }
printf("The octal no. is given by\n%d",s);

}

if(n==4)

{
  int o,i=0,j=0,s=0,h,l=0;
  int d,b,g,k=0,a;
 printf("Enter octal no. -- \n");
 scanf("%d",&o);
 
 while(o>0)
 {
   i=o%8;
   s=(s*10)+i;
   o=o/8;
 }

while(s>0)
{
  h=s%10;
  j=(j*10)+h;
  s=s/10;
}
{
  //binary conversion

while(j>0)
 {
   b=j%2;
   k=(k*10)+b;
   j=j/2;
 }

while(k>0)
{
  a=k%10;
  l=(l*10)+a;
  k=k/10;
}

printf("The binary no. is given by\n%d",l);
}
}
if(n==5)

{
  int o,i,j=0,s=0,h;
 printf("Enter octal no. -- \n");
 scanf("%d",&o);
 
 while(o>0)
 {
   i=o%8;
   s=(s*10)+i;
   o=o/8;
 }

while(s>0)
{
  h=s%10;
  j=(j*10)+h;
  s=s/10;
}
printf("The decimal no. is given by\n%d",j);
}

if(n==6)

{
  int o,i,j=0,s=0,h;
 printf("Enter octal no. -- \n");
 scanf("%d",&o);
 
 while(o>0)
 {
   i=o%8;
   s=(s*10)+i;
   o=o/8;
 }

while(s>0)
{
  h=s%10;
  j=(j*10)+h;
  s=s/10;
}
printf("The decimal no. is given by\n%d\n",j);

int d,hex[100],l=0,m=0;
d=j;
 i=0;
 while(d>0)
 {
   i=d%16;
    if(i<10)
    {
      hex[l]=i+48;
    }
    else
    {
      hex[l]=i+55;
    }
    l++;  
     d=d/16;
 }
printf("The hexadecimal no. is given by\n");
for(i=l-1;i>=0;i--)
{
  printf("%c",hex[i]);
 }
}

if(n==7)

{
  int d=0,i=0,j=0,s=0,h=0,t=0;
 printf("Enter decimal no. --\n");
 scanf("%d",&d);
 
 while(d>0)
 {
   i=d%2;
   s=(s*10)+i;
   t=s;
 // printf("%d------%d\n",d,s);
   d=d/2;
  
 }
//printf("\n%d\n",t);
while(s>0)
{
  h=s%10;
  j=(j*10)+h;
  s=s/10;
}
printf("The Binary no. is given by\n%d",j);
}

if(n==9) 
{
  int d,i,j=0,s=0,hex[100],l=0,m=0,h[100];
 printf("Enter decimal no. --\n");
 scanf("%d",&d);
 
 while(d>0)
 {
   i=d%16;
    if(i<10)
    {
      hex[l]=i+48;
    }
    else
    {
      hex[l]=i+55;
    }
    l++;  
     d=d/16;
 }
printf("The hexadecimal no. is given by\n");
for(i=l-1;i>=0;i--)
{
  printf("%c",hex[i]);
 }
}
//printf("ven by\n%d",h[0]);

if(n==10) 
{
  int d,w=0,y=0,g,z,i=0,j=0,s=0,hex[100],l=0,k=0,h[100];
  char str[100];
 printf("Enter hexadecimal --\n");
 scanf("%s",str);
 
toupper(str);
 for(i=strlen(str)-1;i>=0;i--)
 {
  
    if(isupper(str[i])) 
    {
      s+=(str[i]-55)*pow(16,k);
    }
    else
    {
      s+=(str[i]-48)*pow(16,k);
    }
    k++;  
 }
printf("The decimal no. is given by\n");
 printf("%d\n",s);
 while(s>0)
 {
   z=s%2;
   w=(w*10)+z;
   s=s/2;
 }

while(w>0)
{
  g=w%10;
  y=(y*10)+g;
  w=w/10;
}
printf("The Binary no. is given by\n%d",y);
}




if(n==12) 
{
  int d,i=0,j=0,s=0,hex[100],l=0,k=0,h[100];
  char str[100];
 printf("Enter hexadecimal --\n");
 scanf("%s",str);
 
toupper(str);
 for(i=strlen(str)-1;i>=0;i--)
 {
  
    if(isupper(str[i])) 
    {
      s+=(str[i]-55)*pow(16,k);
    }
    else
    {
      s+=(str[i]-48)*pow(16,k);
    }
    k++;  
 }
printf("The decimal no. is given by\n");
  printf("%d",s);
}

if(n==11) 
{
  int d,m=0,z=0,w=0,y=0,g,i=0,j=0,s=0,hex[100],l=0,k=0,h[100];
  char str[100];
 printf("Enter hexadecimal --\n");
 scanf("%s",str);
 
toupper(str);
 for(i=strlen(str)-1;i>=0;i--)
 {
  
    if(isupper(str[i])) 
    {
      s+=(str[i]-55)*pow(16,k);
    }
    else
    {
      s+=(str[i]-48)*pow(16,k);
    }
    k++;  
 }
  //printf("%d\n",s);
   d=s;
   while(d>0)
 {
   j=d%10;
  // if(j==1)
   z+=j*pow(8,m);
   d=d/10;
   m++;
 }
printf("The octal no. is given by\n%d",z);

}
}


 




