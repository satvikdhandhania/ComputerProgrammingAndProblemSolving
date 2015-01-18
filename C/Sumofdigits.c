#include<stdio.h>
#include<conio.h>
main ()
{   int a,b,r,sum=0;
    printf("Enter The Number You Want To Find Sum Of Digits:");
    scanf("%d",&a);
    b=a;
    go:
    while(b>0)
    {
             r=b%10;
             sum=sum+r;
             b=b/10;
    }
    if(sum>10)
    {  b=sum;
       sum=0;
       goto go;       
    }
    printf("The Single Digit Sum Of Digits Of %d Is %d",a,sum);
    getch();
}

