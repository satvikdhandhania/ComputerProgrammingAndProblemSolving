#include<conio.h>
#include<stdio.h>
main()
{
      int a,b;
      printf("Enter Value For A AND B :");
      scanf("%d%d",&a,&b);
      printf("A=%d \tB=%d",a,b);
      printf("\n SWAPPING");
      a=a*b;
      b=a/b;
      a=a/b;
      printf("\nA=%d \tB=%d",a,b);
      getch();
       
      
}
