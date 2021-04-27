/*
#include<stdio.h>
#include<conio.h>
main()
{   int i,n=0,a=0;
    char s[100][100];

   while(n!=3)
   {
        clrscr();
        scanf("%d",&n);
        printf("%d",n);
        if(n==1)
        {
            printf("Enter Name");
           scanf("%s",s);
            a++;
            printf("noo");
            printf("%s",s);
        }

         if(n==2)
        {   printf("yes");
            exit(0);
        }

        if(n==3)
        {
            exit(0);
        }
    }
}*/


#include<stdio.h>
#include<math.h>
#include<conio.h>
struct poly
{
    int coeff;
    int exp;
};

struct poly a[50],b[50],c[50];
void main()
{   // int a[100],b[100],c[100];
    int i,m,k,l;
    int p1,p2;
    printf("enter the degree of polynomial1: ");
    scanf("%d",&p1);
    k=0,l=0,m=0;
    for(i=0; i<=p1; i++)
    {
        printf("\n enter the coefficient of x^%d : ",i);
        scanf("%d",&a[i].coeff);
       // printf("%d\n",i);
        a[k++].exp=i;
    }
    printf("\n enter the degree of polynomial2: ");
    scanf("%d",&p2);
    for(i=0; i<=p2; i++) {
        printf("\n enter the coefficient of x^%d: ",i);
        scanf("%d",&b[i].coeff);
        b[l++].exp=i;
    }
    printf("\n polynomial1 = %d",a[0].coeff);
    for(i=1; i<=p1; i++) {
        printf(" + %dx^%d",a[i].coeff,a[i].exp);
    }
    printf("\n polynomial2 = %d",b[0].coeff);
    for(i=1; i<=p2; i++) {
        printf(" + %dx^%d",b[i].coeff,b[i].exp);
    }
    if(p1>=p2) {
        for(i=0; i<=p2; i++) {
            c[m].coeff=a[i].coeff+b[i].coeff;
            c[m].exp=a[i].exp;
            m++;
        }
        for(i=p2+1; i<=p1; i++) {
            c[m].coeff=a[i].coeff;
            c[m].exp=a[i].exp;
            m++;
        }
    }
    else {
        for(i=0; i<=p1; i++) {
            c[m].coeff=a[i].coeff+b[i].coeff;
            c[m].exp=b[i].exp;
            m++;
        }
        for(i=p1+1; i<=p2; i++) {
            c[m].coeff=b[i].coeff;
            c[m].exp=b[i].exp;
            m++;
        }
    }
    printf("\n addition of polynomial is: %d",c[0].coeff);
    for(i=1; i<=m; i++) {
        printf(" + %dx^%d",c[i].coeff,c[i].exp);
}
    getch();
}