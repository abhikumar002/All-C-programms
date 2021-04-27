#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{   char s1[100],s2[100][100]={0},c;
    int i,j=0,k=0,sum=0,temp,n;
    printf("Enter String including nos.\n");
      gets(s1);
   printf("Enter the character for split\n");
      scanf("%c",&c);
    
    while(s1[k]!='\0')
    {
       j=0;
        while(s1[k]!=c && s1[k]!='\0')
        {
            s2[i][j]=s1[k];
            j++;
            k++;
        }
        s2[i][j]='\0';
        i++;
        if(s1[k]!='\0')
        {
          k++;
        }
    }
 int len=i;
 //this function convert string into integer
   printf("the string are\n");
 
  for(i=0;i<len;i++)
{
   printf("%s\n",s2[i]);
}
    return 0;
}