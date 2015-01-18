#include<stdio.h>
#include<conio.h>
main ()
{    int a,x,y,i=1;
     printf("Enter NUMBER :");
     scanf("%d",&x);
     printf("Enter POWER :");
     scanf("%d",&y);
     a=x;
     while(i<y)
     {    x=x*a;
          i++;     
     }  
     printf("\n The Value Is : %d",x);
     getch();
}
