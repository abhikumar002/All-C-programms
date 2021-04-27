#include<stdio.h>

main()
{   char s[100];
    int i,count=0;
    printf("Enter String to know how many vowels are there\n");
      scanf("%s",&s);
    for(i=0;s[i]!='\0'; i++)
        {
            count++;
        }
        printf("The length of %s is %d",s,count);
    return 0;
}