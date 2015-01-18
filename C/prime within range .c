#include<stdio.h>
#include<conio.h>
main ()
{   int i,j,a,b;
    printf("\nEnter The Range You Want To Check In:");
    scanf("%d %d",&a,&b);
     for(i=a;i<=b;i++)
      {  for(j=2;j<i;j++)
               {   if(i%j==0)
                   break;            
               }
               if(i==j)
               {
                  printf(" %d \n",i);
                     
               }
      }             
getch();
}
     
