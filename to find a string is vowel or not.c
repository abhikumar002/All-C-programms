#include<stdio.h>

main()
{   char c;
    printf("Enter Char\n");
    scanf("%s",&c);
    
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
    {
    printf("Yes, Enter string is a vowel\n");
    }
    else
    {
    printf("No,Enter string is not a||c== vowel");
    }
    return 0;
}