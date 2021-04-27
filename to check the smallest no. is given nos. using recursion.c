#include<stdio.h>
int checkofmin(int a[],int size,int min);
int main()
{  
    int a[20],size,i,min;
    printf("Plz enter the size of array\n");
    scanf("%d",&size);
    printf("Plz enter the no.\n");
    for(i=0;i<size;i++)
    {
     scanf("%d",&a[i]);
    }
min=checkofmin(a,size-1,a[0]);
     
    printf("the smallest no. is %d",min);
}

int checkofmin(int a[],int size,int min)
{
 if(size>=0)
{
 if(a[size]<min)
  {
   min=a[size];
  }
  size--;
  checkofmin(a,size,min);
}
else
{
 return min;
}
}