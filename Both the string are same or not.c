
#include<stdio.h>
#include<string.h>
main()
{
    int i=0,j,flag=0,len1,len2;
    char str1[100],str2[100];
    printf("Enter a string 1\n");
    gets(str1);
    printf("Enter a string 2\n");
    gets(str2);
    len1=strlen(str1);
    len2=strlen(str2);
    
    while(i<len1 || i<len2)
    {
    
            if(str1[i]==str2[i])
            {
                i++;
                continue;
            }
            
        
  if(str1[i]<str2[i]) 
{
 flag=-1;
break;
}
 if(str1[i]>str2[i]) 
{
 flag=1;
 break;
 
}


     }
        
    if(flag==0)
    {
        printf("Both string are same\n");

    }
    else if(flag==-1)
    {
        printf("string1 is less than string2 and so, they are not equal\n");

    }
    
    else if(flag==1)
    {
        printf("string1 is greater than string2 and so, they are not equal\n");

    }

}

 

