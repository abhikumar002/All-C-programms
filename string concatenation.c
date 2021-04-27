#include<stdio.h>
main()
{   char s1[100],s2[100];
    int i,j=0;
    printf("Enter String1\n");
    gets(s1);
    printf("enter string2\n");
    gets(s2);
    
    for(i=0;s1[i]!='\0'; i++);
   {
        s1[i]=' ';
        i++;
    } 
    
    for(j=0;s2[j]!='\0'; i++,j++)
    {
        s1[i]=s2[j];
    }
     s1[i]='\0';
        printf("%s\n",s1);
    
    return 0;
}