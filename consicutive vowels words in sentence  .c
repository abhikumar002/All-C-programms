
#include<stdio.h>
#include<string.h>
main()
{
    int i=0,j=0,k=0,a,minIndex=0,maxIndex=0,max=0,min=0;
    char str1[100]= {0},substr[100][100]= {0},c,sstr[100],sstr1[100];
    printf("Enter a sentence\n");
    gets(str1);
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

            for(k=j+1; substr[i][k]!='\0'; k++)
            {
                if(strcmp(substr[i][k],substr[i][j])==0)
                {
                    strcpy(substr[i],sstr1);

                }
                else if(i==len-1)
                {
                    printf("Enter substring is not found!!!\nSo,the sentence is same as previous\n");
                }
            }
            for(i=0; i<len; i++)
            {
                printf("%s ",substr[i]);

            }
            printf("\n");

        }

        /*
        #include<stdio.h>

        #include<string.h>
        main()
        {
        int i,j,flag=0,len1,len2,replaceLen,start,end;
        char str[100],substr[100],replace[20],temp[120];
        printf("Enter a string\n");
        gets(str);
        printf("Enter a substring to be replaced with\n");
        gets(substr);
        printf("Enter String to replace\n");
        gets(replace);
        len1=strlen(str);
        len2=strlen(substr);
        replaceLen=strlen(replace);
        strcpy(temp,str);
        for(i=0;i<=len1-len2;i++)
        {
        start=i;
        for(j=i;j<i+len2;j++)
        {
        flag=1;
        if(str[j]!=substr[j-i])
        {
        flag=0;
        break;

        }
        else
        {
        end=j;

        }

        }
        if(flag==1) break;

        }
        if(flag==1)
        {
        int k=0;
        if(len2==replaceLen)
        {
        for(i=0;i<len1;i++)
        {
        if(i>=start && i<=end)
        {
        str[i]=replace[k];
        k++;

        }

        }

        }
        if(replaceLen-len2>0)
        {
        for(i=0;i<len1;i++)
        {
        if(i>=start && i<=end)
        {
        str[i]=replace[k];
        k++;

        }

        }
        k=0;
        int x;
        //Storing for continuing copy o remaining string in the original one x=end+1;
        //For adding the remaining string left in replace for(i=0;i<len1+(replaceLen-len2);i++)
        {
        if(i<=end)
        {
        temp[i]=str[i];

        }
        //from end of the substring to length of extra string in replace if(i>end && i<=end+(replaceLen-len2))
        {
        temp[i]=replace[len2+k];
        k++;

        }
        if(i>end+(replaceLen-len2))
        {
        temp[i]=str[x++];

        }

        }
        temp[i]='\0';
        strcpy(str,temp);

        }
        if(replaceLen-len2<0)
        {
        int rem=end+(replaceLen-len2);
        for(i=0;i<len1;i++)
        {
        if(i>=start && i<=rem)
        {
        str[i]=replace[k];
        k++;

        }

        }
        k=0;
        int x;
        //Storing for continuing copy o remaining string in the original one x=end+1;
        //For adding the remaining string left in replace for(i=0;i<len1+(replaceLen-len2);i++)
        {
        if(i<=end)
        {
        temp[i]=str[i];

        }
        if(i>end+(replaceLen-len2))
        {
        temp[i]=str[x++];

        }

        }
        temp[i]='\0';
        strcpy(str,temp);

        }
        printf("String After replacing is\n%s\n",str);

        }
        else
        {
        printf("Entered Substring not Found\n");

        }

        }


        */

