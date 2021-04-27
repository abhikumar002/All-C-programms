
#include<stdio.h>
#include<string.h>
main()
{
    int i,j,flag=0,len1,len2;
    char str[100],substr[100];
    printf("Enter a string\n");
    gets(str);
    printf("Enter a substring to be searched\n");
    gets(substr);
    len1=strlen(str);
    len2=strlen(substr);
    for(i=0; i<=len1-len2; i++)
    {
        for(j=i; j<=i+len2; j++)
        {
            flag=1;
            if(str[j]!=substr[j-i])
            {
                flag=0;
                break;
            }

        }
        if(flag==1) break;

    }
    printf("%d\n",i);
    if(flag==1)
    {
        printf("Search is Successful\n");

    }
    else
    {
        printf("Search is not Successful\n");

    }

}




/*


int main ()
{
int a = 2048, sum =0 ,z ;
foo (a, sum);
z=sum;
 printf ("%d\n", z);
getchar();
 }

void foo(int n, int sum)
 {
int k = 0, j = 0;
if (n == 0)
{
printf("%d\n",sum);
return sum;
}
 k = n % 10; j = n / 10;
 sum = sum + k;
 foo (j, sum);
printf ("%d,", k);
 printf("1\n");
}
_*/

/*

#include <stdio.h>
#include <conio.h>
void main()
{
struct udd
{
 char c;
 float f;
 int a[5];
}table1;
}
*/