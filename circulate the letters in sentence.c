#include<stdio.h>
#include<string.h>
void main()
{ 
char str[100];
int i,j,n;
printf("Enter the sentence :\n");
gets(str);
printf("Enter, how many times str will circulate :\n ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
  char c=str[0];
  for(j=0;str[j]!='\0';j++)
  {
    if(str[j+1]!='\0')
    {
     str[j]=str[j+1];
    }
    else
    break;
  }
   str[j]=c;
   str[j+1]='\0';
   
  // 
}

    printf("\n%s\n",str);
 
}