
#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int n,i;
char str[20];

printf("Enter the str.\n");
 gets(str);

for(i=0;i<strlen(str);i++)
{
 
  if(islower(str[i]))
  {
    printf("%c",toupper(str[i]));
  }

  else if(isupper(str[i]))
  {
    printf("%c",tolower(str[i]));
  }

  else
  {
    printf("%c",str[i]);
  }

}
}

