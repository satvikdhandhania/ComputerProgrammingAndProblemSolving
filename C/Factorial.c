#include<stdio.h>
#include<conio.h>
main ()
{    int x,f=1,i=1;
     printf("Enter NUMBER For Factorial:");
     scanf("%d",&x);
     while(i<=x)
     {    f=f*i;
          i++;     
     }  
     printf("\n The Value Is : %d",f);
     getch();
}
