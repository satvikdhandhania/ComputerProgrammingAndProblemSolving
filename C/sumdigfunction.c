#include<conio.h>
#include<stdio.h>
main()
{
      int n;
      int sum(int);
      printf("\n Enter Number :");
      scanf("%d",&n);
      printf("\nSum Of Digits =%d",sum(n));
      getch();
}
int sum(int x)
{
    int r,s=0;
    while(x!=0)
    {  r=x%10;
       s=s+r;
       x=x/10;
    }
    return s;
}
