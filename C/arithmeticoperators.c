#include<conio.h>
#include<stdio.h>
main()
{
   float a,b,sum,sub,mul,div;
   printf("Enter Two Numbers (2nd no. should not be zero) :");
   scanf("%f%f",&a,&b);
   sum=a+b;
   sub=a-b;
   mul=a*b;
   div=a/b;
   printf("\n SUM OF THE NUMBERS =%f \nDifference Between 2 numbers =%f \n Product of the numbers =%f \n Quotient Of the two numbers =%f",sum,sub,mul,div);
   getch();   
}
