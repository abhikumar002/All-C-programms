#include<stdio.h>

#include<stdlib.h>

#include<string.h>
int main()
{
 int i,j,flag;
 char s1[100],s2[100];
 printf("Enter String 1 to check whether all characters are present in Second String or not and is Case Sensitive\n");
 gets(s1);
 printf("Enter String 2\n");
 gets(s2);
 for(i=0;i<strlen(s1);i++) 
{
 flag=0;
 for(j=0;j<strlen(s2);j++) 
{
 if(s1[i]==s2[j]) 
{
 flag=1;
 break;
 
}
 
}
 if(flag!=1) 
{
 printf("The characters in String 1 are not matching in String 2\n");
 exit(0);
 
}
 
}
 printf("All characters in String1 matches String 2\n");
 return 0;

}
 

