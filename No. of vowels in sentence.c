#include<stdio.h>

main()
{   char s[100];
    int i,count=0;
    printf("Enter String to know how many vowels are there\n");
      gets(s);
    for(i=0;i<=strlen(s); i++)
    {
       
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("No. of vowels in %s is %d",s,count);
    }
    else
    {
        printf("There are no vowel present in a string");
    }
    return 0;
}