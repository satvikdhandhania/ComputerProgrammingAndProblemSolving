#include<conio.h>
#include<stdio.h>
main()
{     int a;
      printf("Enter The YEAR You Want To Check :");
      scanf("%d",&a);
      if(a%4==0)
             printf("\n%d Is Leap Year !",a);
      else
             printf("\n%d Is Not a Leap Year !",a);     
      getch();  
}
