#include<conio.h>
#include<stdio.h>
#include<math.h>
main()
{
      int i,n;
      float b=1.0,a=3.0,t,sum=0.0;
      printf("Enter Limit :");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {    
           t=(b/a)*(pow(-1,i+1));
           b=a;
           a=b*b;
           sum=sum+t;
      }
      printf("\n The sUM of series 4 is %f",sum);
getch();
}
                       
