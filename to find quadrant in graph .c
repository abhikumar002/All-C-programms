

#include<stdio.h>
main()
{
float x,y;
printf("Enter (x,y) Co-Ordinates\n");
scanf("%f %f",&x,&y);
if(x>0&&y>0)
{
 printf("Co-Ordianates (%f,%f) lies in First Quadrant\n",x,y);

}
if(x<0&&y>0)
{
 printf("Co-Ordianates (%f,%f) lies in Second Quadrant\n",x,y);

}
if(x<0&&y<0)
{
 printf("Co-Ordianates (%f,%f) lies in Third Quadrant\n",x,y);

}
if(x>0&&y<0)
{
 printf("Co-Ordianates (%f,%f) lies in Fourth Quadrant\n",x,y);

}
if(x==0&&y==0)
{
 printf("Co-Ordianates (%f,%f) lies at the Origin\n",x,y);

}

}



    