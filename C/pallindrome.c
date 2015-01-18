#include<stdio.h>
#include<conio.h>
main ()
{   int a,b,r,rev=0;
    printf("Enter The Number You Want To Check:");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
             r=b%10;
             rev=rev*10+r;
             b=b/10;
    }
    if(rev==a)
    printf("The Number Is Pallindrome !!");
    else
    printf("The Number Is Not Pallindrome !! ");
    getch();
}

