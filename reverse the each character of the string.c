
#include<stdio.h>
#include<string.h>
Getreversewords(char *str,char *str1,int c);
void main ()
{ 
int c=0,i,len,k,j=0;
char str1[100],str2[10][100];
printf("Enter the string\n");
gets(str1);
len=strlen(str1);
k=0;
for(i=0;i<len;i++)
{
  if(str1[i]!=' ')
  {
   str2[k][j]=str1[i];
   j++;
  }
  else
  {
    str2[k][j]='\0';
    j=0;
    k++;
  }
}
str2[k][j]='\0';

for(i=0;i<=k;i++)
{
c=Getreversewords(str2[i],str1,c);
str1[c]=' ';
c++;
}
str1[c]='\0';
printf ("%s\n", str1);
 
}

int Getreversewords(char *str,char *str1,int c) 
{
int j;

for(j=strlen(str)-1;j>=0;j--)
{
  str1[c]=str[j];
c++;
}

return c;
}

