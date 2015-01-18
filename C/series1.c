#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int i,s=0,p=0,n,t;
      printf("Enter Limit :");
      scanf("%d",&n);
      for(i=1;i<=2*n;)
      {   t=i*pow(-1,p);
          s=s+t;
          p++;
          i=i+2;
      }
      printf("\n The sUM of series 1 is %d",s);
getch();
}
                       
