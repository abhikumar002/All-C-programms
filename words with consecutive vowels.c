
#include<stdio.h>
#include<string.h>
main()
{
    int count=0,z=104,i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0,flag=0;
    char str1[100]= {0},substr[100][100]= {0},c,sstr[100],sstr1[100],sub[100];
    printf("Enter a sentence\n");
    gets(str1);
  //  sub=' ';
    while(str1[k]!='\0')//for splitting sentence
    {
        j=0;
        while(str1[k]!=' '&&str1[k]!='\0')
        {
            substr[i][j]=str1[k];
            k++;
            j++;

        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0')
        {
            k++;

        }

    }
    
    int len=i;
    for(i=0; i<len; i++)
    {
        //   while(substr[i]!=0)
     for(j=0; substr[i][j]!='\0'; j++)
      {
       if(substr[i][j]=='a'||substr[i][j]=='A'||substr[i][j]=='e'||substr[i][j]=='E'||substr[i][j]=='i'||substr[i][j]=='I'||substr[i][j]=='o'||substr[i][j]=='O'||substr[i][j]=='u'||substr[i][j]=='U')
        {
            for(k=j+1; substr[i][k]!='\0'; k++)
            {
               if(substr[i][k]=='a'||substr[i][k]=='A'||substr[i][k]=='e'||substr[i][k]=='E'||substr[i][k]=='i'||substr[i][k]=='I'||substr[i][k]=='o'||substr[i][k]=='O'||substr[i][k]=='u'||substr[i][k]=='U')
               { 
                   //   z=i;
                  if(i!=z)
               {   
                    printf("\n%s",substr[i]);
                              flag=1;
                     // sub[count]=substr[i];
                   //  count++;
                      z=i;
                  break;
               }
                break;
               }
              else
               {
                 break;
               }
            }
        }
      }
    }
    
//To remove repeated words
    len=count;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len;)
        {
            if(strcmp(sub[i],sub[j])==0)
            {
                for(k=j; k<len; k++)
                {
                    strcpy(sub[k],sub[k+1]);

                }
                len--;

            }
            else
            {
                j++;

            }

        }

    }
           if(flag==0)
            {
                printf(" substring is not found!!!\n");
            }
           else{
            for(i=0;i<len;i++)
            printf("\n%s",sub[i]);
        }



    }
    

/*
#include<stdio.h>

#include<string.h>
#include<ctype.h>
int GetVowelOrNot(char c,char c1);
main()
{
    int i,j,k=0,flag=0,checkVowel,len,count=0;
    char str[100],substr[30],mainstr[30][20];
    printf("Enter a string to find words with consecutive vowels\n");
    gets(str);
    len=strlen(str);
    printf("Words with Consecutive Vowels\n");
    for(i=0; i<=len; i++) //i<=len for checking last word also because there will be no space at the end of sentence
    {
        if(str[i]!=' ' && i!=len)
        {
            substr[k++]=str[i];

        }
        else
        {
            substr[k]='\0';
            int sublen=strlen(substr);
            for(j=0; j<sublen-1; j++)
            {
                checkVowel=GetVowelOrNot(tolower(substr[j]),tolower(substr[j+1]));
                if(checkVowel==1)
                {
                    flag=1;
                    strcpy(mainstr[count],substr);
                    count++;
                    break;

                }

            }
            k=0;

        }

    }
//To remove repeated words
    len=count;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len;)
        {
            if(strcmp(mainstr[i],mainstr[j])==0)
            {
                for(k=j; k<len; k++)
                {
                    strcpy(mainstr[k],mainstr[k+1]);

                }
                len--;

            }
            else
            {
                j++;

            }

        }

    }
    if(flag!=1)
    {
        printf("are not there\n");

    }
    else
    {
        for(i=0; i<len; i++) printf("%s\n",mainstr[i]);

    }

}
int GetVowelOrNot(char c,char c1)
{
    int x=0,y=0;
    if(c=='a' || c=='e'||c=='i'||c=='o'||c=='u')
    {
        x=1;

    }
    if(c1=='a' || c1=='e'||c1=='i'||c1=='o'||c1=='u')
    {
        y=1;

    }
    if(x==1 && y==1)
        return 1;
    else return 0;

}



    */