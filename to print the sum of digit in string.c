#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{   char s1[100],s2[100]={0};
    int i,j=0,sum=0,temp,n;
    printf("Enter String including nos.\n");
      gets(s1);
   
    for(i=0;i<strlen(s1);i++)
    {
       
        if(s1[i]>='0' && s1[i]<='9')
        {
            s2[j]=s1[i];
            j++;
        }
    }
 
temp=atoi(s2);  //this function convert string into integer
   printf("the nos. is in the string are %d",temp);

while(temp>0)
{
n=temp%10;
sum+=n;
temp=temp/10;
}
   printf("\nThe sum of the nos. present in the string %d",sum);
    
    return 0;
}