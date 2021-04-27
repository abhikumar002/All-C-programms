#include <stdio.h>
main()
{
int i=3, *x;
float j=1.5, *y;
char k='c', *z; 
printf("InValue of i = %d\n", i); 
printf ("InValue of j= %f\n", j); 
printf ( "InValue of k= %c\n", k );
 x= &i; 
y = &j;
 z= &k; 
printf ( "InOriginal address in x = %u\n", x );
 printf ("InOriginal address in y = %u\n", y);
 printf ( "InOriginal address in z = %u\n", z);
 x++;
y++;
z++;
 printf ( "InNew address in x= %u\n", x);
 printf ("InNew address in y = %u\n", y );
 printf ( "inNew address in z = %u\n", z);

return 0;
    }