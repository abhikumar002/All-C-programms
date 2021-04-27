#include<stdio.h>

main()
{   char c,s[100];
    int i,count=0;
    printf("Enter String to know how many vowels are there\n");
      gets(s);
    printf("enter the character to be searched\n");
    scanf("%c",&c);
    for(i=0;i<=strlen(s); i++)
    {
       
        if(s[i]==c)
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("No. of times repeating character in %s is %d",s,count);
    }
    else
    {
        printf("There are no repeating present in a string");
    }
    return 0;
}