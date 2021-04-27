
#include<stdio.h>
void Getthefrequency(int num,int frequency[]);
int Checkrepeateddigits(int frequency[],int totaldigits,int flg);
main()
{
    int i,n,frequency[9],flg,num,a,k,j;
    printf("Enter no. to find which digit are repreated\n");
    scanf("%d",&a);

    for(i=0; i<10; i++)
    {
        frequency[i]=0;
    }


    Getthefrequency(a,frequency);
   flg=Checkrepeateddigits(frequency,9,0);
    if(flg==1)
    {
        printf("repeated digits are there");
    }

    else
    {
        printf("Not Repeated digits");
    }
    
}

void Getthefrequency(int n,int frequency[])
{
    int k;
    if(n>0)
    {
        k=n%10;
        frequency[k]+=1;
        n/=10;
        Getthefrequency(n,frequency);

    }
   
    else
    {
  
    return;
    }

}

int Checkrepeateddigits(int frequency[],int totalDigits,int flg)
{
int j;
    if(totalDigits>=0)
    {
        if(frequency[totalDigits]>1)
        {
            flg=1;
            printf("%d --> repeated %d times\n",totalDigits,frequency[totalDigits]);

        }
        totalDigits--;
        Checkrepeateddigits(frequency,totalDigits,flg);
  
     
    }
    else
    {
        return flg;

    }

}


    