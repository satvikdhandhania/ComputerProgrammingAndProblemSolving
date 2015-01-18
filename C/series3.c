#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int i,s,n,sum=0;
      printf("Enter Limit :");
      scanf("%d",&n);
      s=1;
      for(i=1;i<=n;i++)
      {   
          s=s*i; 
           sum=sum+s;
      }
      printf("\n The sUM of series 3 is %d",sum);
getch();
}
                       
