#include<conio.h>
#include<stdio.h>
main()
{
      int n;
      int rev(int);
      printf("\n Enter Number :");
      scanf("%d",&n);
      printf("\nReverse Number =%d",rev(n));
      getch();
}
int rev(int x)
{
    int r,s=0;
    while(x!=0)
    {  r=x%10;
       s=s*10+r;
       x=x/10;
    }
    return s;
}
