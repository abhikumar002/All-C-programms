#include<stdio.h>
#include<conio.h>
main()
{

 int i,count;
 char str[100];
 printf("Enter number of characters to limit input\n");
 scanf("%d",&count);
 printf("Enter the string less than or equal to %d characters\n",count);
 for(i=0;i<=count;i++) 
{
 str[i]=getche();
if(str[i]==13)
 { 
   break;
 }
 
}
 str[i]='\0';
 printf("\nEntered string %s\n",str);

}
 

/*
main()
{
printf("\tEKALAVYA\rSYSTEM\n\t  OF\rMASTERING\n");
printf("\nABC\vDEF\vGHI\v\n");
printf("\nABC\tDEF\tGHI\t\n");
}
    
    /*
    #include<graphics.h>
    main()
    {
    int gd=0,gm;
    initgraph(&gd,&gm,"c://bgi");
    setcolor(14);
    circle(300,200,70);
    getch();
    closegraph();
    }
    */