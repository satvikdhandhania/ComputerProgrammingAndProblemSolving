#include<stdio.h>
#include<conio.h>
main ()
{    int n,a=-1,b=1,s,i=1;
     printf("Enter Number Of Terms Needed :");
     scanf("%d",&n);
     while(i<=n)
     {          
                s=a+b;
                a=b;
                b=s;
                i++;
                printf("%d  ",s);
     }
     getch();
}
