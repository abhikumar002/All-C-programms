#include<stdio.h>
#include<string.h>
main()
{   char c,s[100];
    int i,x,k;
    printf("Enter a sentence\n");
    gets(s);
    while(s[k]!='\0')
    {
        if(s[k]==' ')
         { 
           printf("%c",' ');
         }
        if(s[k]>='a' && s[k]<='z')
        {
            c=s[k]-32;
            
          printf("%c",c);
        }

        if(s[k]>='A' && s[k]<='Z')
        {
            c=s[k]+32;
            printf("%c",c);
        }
        k++;
    }
    return 0;
}