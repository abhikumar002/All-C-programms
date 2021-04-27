
#include<stdio.h>
#include<string.h>
main()
{
 int i,j,n;
 char s[100],str[100][100];
 printf("Enter size of array\n");
 scanf("%d",&n);
 printf("Enter the string for sorting\n");
 for(i=0;i<n;i++) 
{
 scanf("%s",&str[i]);
}

for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
    if(strcmp(str[i],str[j])>0)
     {
       strcpy(s,str[i]);
       strcpy(str[i],str[j]);
       strcpy(str[j],s);
     }
  }
}


 printf("Sorted array is\n");
 for(i=0;i<n;i++) 
{
 printf("%s\n",str[i]);
}

}







