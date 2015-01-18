#include<stdio.h>
#include<conio.h>
main ()
{   int a;
    printf("Enter The Day Number :");
    scanf("%d",&a);
    switch(a)
    {
             case 1: printf("It is Monday !!!");
                     break;
             case 2: printf("It is Tuesday !!!");
                     break;
             case 3: printf("It is Wednesday !!!");
                     break;
             case 4: printf("It is Thursday !!!");
                     break;
             case 5: printf("It is Friday !!!");
                     break;
             case 6: printf("It is Saturday !!!");
                     break; 
             case 7: printf("It is Sunday !!!");
                     break;
             default: printf("Wrong Input ...Run Again  !!!");
    }
    getch();
}

