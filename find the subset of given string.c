/*
#include<stdio.h>

#include<string.h>

#include<math.h>
char *GetBinary(int dec);
int main()
{
 int i,j,len,count=0,noofzeros;
 char str[20],temp[20],binary[20];
 printf("Enter a string\n");
 gets(str);
 len=strlen(str);
 printf("Subsets of Given String are");
 for(i=0;i<(pow(2,len));i++)//2^len is the number of subsets for given length. 
{
 strcpy(binary,GetBinary(i));
 noofzeros=len-strlen(binary);
//Since zeros will not be there before single digits and double etc depending on length of binary number. //To compensate them we used here
 for(j=0;j<len;j++) 
{
 if(j>=noofzeros) 
{
 if(binary[j-noofzeros]!='0') 
printf("%c",str[j]);
 
}
 
}
 printf("\n");
 
}
 return(0);

}
char *GetBinary(int dec)
{
 int temp,i,j=1,k=0;
 char binary[20];
 temp=dec;
 while(temp!=0) 
{
 i=temp%2;
 binary[k]=i+'0';
 temp=temp/2;
 j=j*10;
 k++;
 
}
 binary[k]='\0';
 return(strrev(binary));

}


Method II:Can find subsets for smaller strings as we are taking binary number as integer 
*/

#include<stdio.h>

#include<string.h>

#include<math.h>
int getbinary(int dec);
main()
{
 int i,j,binary,len,count=0,tempLen;
 char str[20],temp[20];
 printf("Enter a string\n");
 gets(str);
 len=strlen(str);
printf("%d\n",len);

 for(i=1;i<pow(2,len);i++)
{
 binary=getbinary(i);
 sprintf(temp,"%d",binary);
 tempLen=len-strlen(temp);
 for(j=0;j<len;j++)
  { if(j>=tempLen)
   if(temp[j-tempLen]!='0')
      printf("%c",str[j]);
  }
printf("\n");
}
}

int getbinary(int dec)
{
 int j=1,i,temp, binary=0;
  temp=dec;
  while(temp!=0)
 {
  i=temp%2;
  binary=binary+(i*j);
  temp=temp/2;
  j=j*10;
 }
return binary;
}
    