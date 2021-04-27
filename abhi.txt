#include<stdio.h>
#include<conio.h>
main()
{
    int n,l,o=8;
   
 {   clrscr();
    printf("1)Currency conversion\n");
    printf("2)Length conversion\n");
    printf("3)Speed conversion\n");


    scanf("%d",&n);
    while(n>0)
    {
        if(n==1)
        {   int m;
            printf("1)Rupee to dollar\n");
            printf("2)dollar to Rupee\n");
            printf("3)Rupee to Euro\n");
            printf("4)Euro to Rupee\n");
            scanf("%d",&m);

            if(m==1)
            {
                float rs,c;
                printf("Enter Rupees--\n");
                scanf("%f",&rs);
                c=rs*.0134;
                printf("%f $\n",c);
                break;
            }

            if(m==2)
            {
                float dr,c;
                printf("Enter Dollar--\n");
                scanf("%f",&dr);
                c=dr*75.01;
                printf("%f INR\n",c);
                break;
            }

            if(m==3)
            {
                float rs,c;
                printf("Enter Rupees--\n");
                scanf("%f",&rs);
                c=rs*.0121;
                printf("%f EUR\n",c);
                break;
            }

            if(m==4)
            {
                float er,c;
                printf("Enter Euro--\n");
                scanf("%f",&er);
                c=er*82.8;
                printf("%f INR\n",c);
                break;
            }
            else
            {
                printf("Invalid Entry");
                break;
            }
        }

        if(n==2)
        {   int m;
            printf("1)m to cm\n");
            printf("2)cm to m\n");
            printf("3)km to m\n");
            printf("4)m to km\n");
            scanf("%d",&m);

            if(m==1)
            {
                float mm,c;
                printf("Enter m--\n");
                scanf("%f",&mm);
                c=mm*100;
                printf("%f cm\n",c);
                break;
            }

            if(m==2)
            {
                float cm,c;
                printf("Enter cm--\n");
                scanf("%f",&cm);
                c=cm*.01;
                printf("%f m\n",c);
                break;
            }

            if(m==3)
            {
                float km,c;
                printf("Enter km--\n");
                scanf("%f",&km);
                c=km*1000.0;
                printf("%f m\n",c);
                break;
            }

            if(m==4)
            {
                float mm,c;
                printf("Enter m--\n");
                scanf("%f",&mm);
                c=mm*.001;
                printf("%f km\n",c);
                break;
            }
            else
            {
                printf("Invalid Entry");
                break;
            }
        }

        if(n==3)
        {   int m;
            printf("1)m/s to km/s\n");
            printf("2)km/s to m/s\n ");
            printf("3)m/s to km/h\n");
            printf("4)km/h to m/s\n");
            scanf("%d",&m);

            if(m==1)
            {
                float ms,c;
                printf("Enter m/s--\n");
                scanf("%f",&ms);
                c=ms*.001;
                printf("%f km/s\n",c);
                break;
            }

            if(m==2)
            {
                float km,c;
                printf("Enter km/s--\n");
                scanf("%f",&km);
                c=km*1000;
                printf("%f m/s\n",c);
                break;
            }

            if(m==3)
            {
                float ms,c;
                printf("Enter m/s--\n");
                scanf("%f",&ms);
                c=ms*.0278;
                printf("%f km/h\n",c);
                break;
            }

            if(m==4)
            {
                float km,c;
                printf("Enter km/h--\n");
                scanf("%f",&km);
                c=km*3.6;
                printf("%f m/s\n",c);
                //  scanf("%f",&km);
                break;

            }


            else
            {
                printf("Invalid Entry");
                break;
            }

        }
        else
        {
            printf("Invalid Entry");
            break;
        }
    }
  }
}
/*
{
  int x=2;

 printf("%d %d %d",x*x,++x,x++);
 getchar();
}
*/
