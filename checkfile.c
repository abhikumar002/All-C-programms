/*#include<stdio.h>
#include<string.h>
main()
{
    int z,i=0,j,a[6],flag=0,c,n,temp=0,t,k;

    printf("Enter a No.\n");
    scanf("%d",&t);
    n=t;
      while(t>0)
    {
        j=t%10;
        a[i]=j;
        t=t/10;
        i++;
        
    }
    
      while(n>0)
    {
        z=n%10;
        temp=temp*10+z;
        n=n/10;
    }
  
      
    printf("%d\n",temp);
    

    if(i<7)
    {
        for(k=0; k<i; k++)
        {
            printf("%d\n",a[k]);
        }
    }
    else if(i>=7)
    { 
    printf("%d\n",i);
        printf("Noo");
    }
}

    */
    
#include<stdio.h>
int main()
{
int i;
FILE *fp;
char s[]="Hello students";
fp=fopen("f1.txt","w");

if(fp==NULL)
{
printf("file cannot open");
exit(1);
}
 for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    fclose(fp);
}