/*
#include<stdio.h>
//int fun(int a[],int n,int sum);
int main()
{
int n,a[100],i,sum=0,j,c,s;
printf("enter the no. of Array elements\n");
scanf("%d",&n);

printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the sorted num is\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
  while(a[i]>a[j])
{
  c=a[i];
  a[i]=a[j];
  a[j]=c;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

printf("Enter the no. for searching in seq.\n");
scanf("%d",&s);

for(i=0;i<n;i++)
{
if(a[i]==s)
{
i=i+1;
printf("Yes, the no. is in %d position",i);
exit(0);
}
}

printf("Not matching in above series!!!");

//fun(a,n,sum);
return 0;
}*/

/*
int fun(int a[],int n,int sum)
{

if(n>=0)
{
if((a[n]%2)==0)
{
 sum+=(a[n]);
}
fun(a,n-1,sum);
}
else 
{
printf("the sum is %d",sum);
return 0;
}
}
*/

/*

#include<stdio.h>
void sort(int ,int *);
void binarysearch(int ,int ,int *,int);
main()
{
 int i,n,searchno;
 printf("Enter size of array\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter the numbers in sorted order\n");
 for(i=0;i<n;i++) 
{
 scanf("%d",&a[i]);
 
}
 sort(n,&a[0]);
 printf("Sorted array is\n");
 for(i=0;i<n;i++) 
{
 printf("%d\n",a[i]);
 
}
 printf("Enter element to be searched\n");
 scanf("%d",&searchno);
 binarysearch(1,n,&a[0],searchno);

}
void sort(int n,int *a)
{
 int i,j,temp;
 for(i=0;i<n;i++)//for sorting in ascending order 
{
 for(j=i+1;j<n;j++) 
{
 if(a[i]>a[j]) 
{
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 
}
 
}
 
}

}
void binarysearch(int low,int high,int *a,int searchno)
{
 int mid;
 if(low>high) 
{
 printf("Search is not successful\n");
 return;
 
}
 mid=(low+high)/2;
 if(a[mid]==searchno) 
{
 printf("Search successful\n");
 return;
 
}
 else if(searchno<a[mid]) 
{
 binarysearch(low,mid-1,a,searchno);
 
}
 else if(searchno>a[mid]) 
{
 binarysearch(mid+1,high,a,searchno);
 
}

}


Method II:Passing array to function

*/
#include<stdio.h>
void sort(int a[],int n);
main()
{
 int i,n,searchno;
 printf("Enter size of array\n");
 scanf("%d",&n);
 int a[n-1]; 
 printf("Enter the numbers in sorted order\n");
 for(i=0;i<n;i++) 
{
 scanf("%d",&a[i]);
}
 sort(a,n);
 printf("Sorted array is\n");
 for(i=0;i<n;i++) 
{
 printf("%d\n",a[i]);
}

}

void sort(int a[],int n)
{
 int i,j,temp;
i=n;
if(i>0)//for sorting in ascending order 
{
 for(j=0;j<n-1;j++) 
{
 if(a[j]>a[j+1]) 
{
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 
}
 sort(a,n-1);
}
}
 else
{
return;
}
}



    