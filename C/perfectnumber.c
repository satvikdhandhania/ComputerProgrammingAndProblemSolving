#include<conio.h>
#include<stdio.h>
main()
{
      int i,n,sum=0;
      printf("\nEnter Number :");
      scanf("%d",&n);
      i=1;
      while(i<n)
      {         
             if(n%i==0)
               sum=sum+i;
             i++;
      }
      if(sum==n)
           printf("\n Perfect Number !");
      else 
           printf("\n Not A Perfect Number !");
      getch();
}
