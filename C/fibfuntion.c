#include<stdio.h>
#include<conio.h>
main()
{
   int n;
   void fib(int);
   printf("\nEnter No. Of Terms :");
   scanf("%d",&n);
   fib(n);
   getch();
}
void fib(int n)
{
     int a=-1,b=1,s=0,i=1;
     while(i<=n)
     {    s=a+b;
          printf("%d\t",s);
          a=b;
          b=s;
          i++;
     }
     
}
