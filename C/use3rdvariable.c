#include<conio.h>
#include<stdio.h>
main()
{
      int a,b,temp;
      printf("Enter Value For A AND B :");
      scanf("%d%d",&a,&b);
      printf("A=%d \tB=%d",a,b);
      printf("\n SWAPPING");
      temp=a;
      a=b;
      b=temp;
      printf("\nA=%d \tB=%d",a,b);
      getch();
}       
