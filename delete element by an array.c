#include<stdio.h>
main()
{   int i,a[100],n,j=0,temp[100],flag=0,k;
    printf("Enter size\n");
    scanf("%d",&n);

    printf("Enter the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the element to be removed\n");
    scanf("%d",&j);
 
    for(i=0; i<n; i++)
    {
        if(j==a[i])
        {
            k=i;
            flag=1;
        }

    }

    if(flag==1)
    {
        for(i=0; i<n-1; i++)
        {
            if(i<k)
            {
                temp[i]=a[i];
            }
            if(i>=k)
            {
                temp[i]=a[i+1];
            }

        }

        printf("your array element's are:\n");
        for(i=0; i<n-1; i++)
        {
            printf("%d\n",temp[i]);
        }
    }
    else
    {
        printf("Your no. is not found in array");
    }
}