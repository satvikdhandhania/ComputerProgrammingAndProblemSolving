#include<stdio.h>
#include<conio.h>
main ()
{   
    float ar1,ar2,ar3,sq,l,b,r;
    printf("\nEnter Side Of Square :");
    scanf("%f",&sq);
    ar1=sq*sq;
    printf("\nArea Of Square = %f",ar1);
    printf("\nEnter Length and breadth Of Rectangle :");
    scanf("%f%f",&l,&b);
    ar2=l*b;
    printf("\nArea Of rectangle = %f",ar2);
    printf("\nEnter radius Of circle :");
    scanf("%f",&r);
    ar3=3.14*r*r;
    printf("\nArea Of circle = %f",ar3); 
    getch();
}
