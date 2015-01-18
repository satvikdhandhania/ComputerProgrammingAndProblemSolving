#include<conio.h>
#include<stdio.h>
main()
{     int a;
      printf("Enter The Number You Want To Check :");
      scanf("%d",&a);
      if(a%2==0)
             printf("\n%d Is EVEN !",a);
      else
             printf("\n%d Is ODD !",a);     
      getch();  
}
