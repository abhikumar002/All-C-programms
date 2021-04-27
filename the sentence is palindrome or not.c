#include<stdio.h>
#include<string.h>
main()
{   char c,s1[100],s2[100]={0};
    int i,x,k,j;
    printf("Enter a sentence to check palindrome or not\n");
    gets(s1);
    for(i=strlen(s1)-1;i>=0;i--)
    {
        s2[j]=s1[i];
        j++;
    }
   s2[j]='\0';
printf("the reverse of the given string is \n%s",s2);
    
    if(strcmp(s1,s2)==0)
    {
    printf("\nthe sentence is palindrome");
    }
    else
    {
    printf("\nthe sentence is not a palindrome");
    }
      return 0;
}