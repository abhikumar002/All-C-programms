#include<stdio.h>
#include<string.h>
main()
{   char c,s[100];
    int i,count[26]={0},x,k;
    printf("Enter a sentence\n");
    gets(s);
    while(s[k]!='\0')
    {

        if(s[k]>='a' && s[k]<='z')
        {
            x=s[k]-'a';
            count[x]++;
           
        }

        if(s[k]>='A' && s[k]<='Z')
        {
            x=s[k]-'A';
            count[x]++;
        }
        k++;
    }

    for(i=0; i<26; i++)
    {
        if(count[i]!=0)
        {
            printf("%c repeated %d times\n",i+'a',count[i]);
        }
    }
    return 0;
}