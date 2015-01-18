#include<conio.h>
#include<stdio.h>
main()
{     int a,b;
      printf("Enter Two Numbers In Which You Want To find the Greatest :");
      scanf("%d%d",&a,&b);
      if(a>=b)
             printf("%d Is Greater Than %d",a,b);
      else
             printf("%d Is Greater Than %d",b,a);     
      getch();  
}
