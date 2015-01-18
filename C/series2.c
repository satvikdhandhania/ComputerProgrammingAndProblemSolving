#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int i,s=0,z,n,t;
      printf("Enter Limit :");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {   z=pow(i,3);
          t=(z+1)*(pow(-1,i));
          s=s+t;
      }
      printf("\n The sUM of series 2 is %d",s);
getch();
}
                       
