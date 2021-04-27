
#include<stdio.h>
main()
{
 float a1,a2,b1,b2,c1,c2,d[4],x,y;
 printf("Enter a1,b1 and c1 of a1x+b1y=c1\n");
 scanf("%f%f%f",&a1,&b1,&c1);
  printf("Enter a2,b2 and c2 of a2x+b2y=c2\n");
 scanf("%f%f%f",&a2,&b2,&c2);
if(((a1*b2)-(b1*a2))!=0)
{
d[0]=(c1/a1);
d[1]=(-1)*(b1/a1);
d[2]=(c2/a2);
d[3]=(-1)*(b2/a2);
y=((d[2]-d[0])/(d[1]-d[3]));
x=d[0]+(d[1]*(y)); 
printf("X=%f\nY=%f\n",x,y);
}

 if(((a1*b2)-(a2*b1))==0&&((b1*c2)-(b2*c1))==0 && ((a2*c1)-(a1*c2))==0) 
{
 if(c1/a1>=0) printf("Infinite number of solutions\nX=%.2fY+%.2f\n",(-1*b1)/a1,c1/a1);
 else printf("Infinite number of solutions\nX=%fY%f\n",(-1*b1)/a1,c1/a1);
 
}
 if(((a1*b2)-(a2*b1))==0&&((b1*c2)-(b2*c1))!=0 && ((a2*c1)-(a1*c2))!=0) 
{
 printf("No Solutions\n");
 
}

}


