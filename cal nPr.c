
#include<stdio.h>
#include<string.h>
#include<math.h>
int factorial(int);
main()
{
int n,r;
float nPr;
printf("n of nPr\n");
scanf("%d",&n);
printf("r of nPr\n");
scanf("%d",&r);

nPr=(float)factorial(n)/factorial(n-r);
printf("%f",nPr);
}

int factorial(int val)
{
int factorial=1,i;
for(i=1;i<=val;i++)
{
factorial*=i;
}

return factorial;
}

