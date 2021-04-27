/*
#include<stdio.h>
#include<string.h>
/*
void main()
{ int x=10;
int *P1;
int **P2;
 P1=&x;
P2=&P1;
++**P2;

x=x+1;
x=*P1+1;
printf("%d",x);
}
*/
/*
main(){
char c[] = "HBUF2011";  

char *p =c;  

printf("%s", p+ 1) ; 
}
*/
/*
#include <stdio.h>

int fun(char *str1)
{ 
  char *str2 = str1;
  while(*++str1);
  return ( str1 - str2)    ;
}
 
int main()
{
  char *str = "codecQuiz";
  printf("%d", fun(str));
  return 0;
}

*/


#include <stdio.h>
#include <string.h>
main()
{
 char p[20];
 char *s="string";
 int length= strlen(s);
 int i;
  
for(i=0;i<length;i++)
{
   p[i]=s[length-i];

}
printf("%s",p);
}