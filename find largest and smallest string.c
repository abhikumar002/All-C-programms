
#include<stdio.h>
#include<string.h>

void main ()
{
    int a,len,c=0,i,k,j=0,maxIndex=0,max=0,minIndex=0,min=0;
    char str1[100]={0},substr[100][100]={0};
    printf("Enter the string\n");
    gets(str1);
    len=strlen(str1);
    k=0;
    while(str1[k]!='\0')
    { 
        j=0;
        while(str1[k]!=' ' && str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            j++; 
            k++;
        }
        substr[i][j]='\0';
        i++;
        
          if(str1[k]='\0');
          {
            k++;
          }
    }

len=i;
    max=strlen(substr[0]);
    min=strlen(substr[0]);

    for(i=0; i<len; i++)
    {
        a=strlen(substr[i]);
        if(a>max)
        {
            max=a;
            maxIndex=i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
    }

    printf("largest string is= %s\nSmallest string is= %s",substr[maxIndex],substr[minIndex]);
}

 


