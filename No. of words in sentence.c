#include<stdio.h>

main()
{   char s[100];
    int i,count=1;
    printf("Enter the sentence\n");
     gets(s);
    for(i=0;i<strlen(s);i++)
    {
       
        if(s[i]==' ')
        {
            count++;
        }
    }
    
    
        printf("%d",count);
    
    return 0;
}