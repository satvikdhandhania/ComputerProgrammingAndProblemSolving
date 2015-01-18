#include<stdio.h>
#include<conio.h>
main ()
{   int a,b,r,sum=0;
    printf("Enter The Number You Want To Check:");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
             r=b%10;
             sum=sum+(r*r*r);
             b=b/10;
    }
    if(a==sum)
        printf("Armstrong Number !");
    else
        printf("Not An Armstrong Number ! ");   
    getch();
}

