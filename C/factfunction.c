#include<conio.h>
#include<stdio.h>
main()
{
      int i,a[5];
      int fac(int);
      for(i=0;i<5;i++)
       {
          printf("Enter The Number %d :",i+1);
          scanf("%d",&a[i]);
       }
      for(i=0;i<5;i++)
       {  
          printf("\nFactorial Of %d is %d !!!",a[i],fac(a[i]));
       }
      getch();
}
int fac(int x)
{
    int f=1,i=1;
    while(i<=x)
     { f=f*i;
       i++;
     }          
    return f;
}
