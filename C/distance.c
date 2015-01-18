#include<conio.h>
#include<stdio.h>
main()
{     int a=0;
      float m,km;
      printf("\nEnter Whether You want in Kilometer(1) or Miles(2)  :");
      scanf("%d",&a);
      if(a==1)
      {       printf("\nEnter Distance in Kilometers :");
              scanf("%f",&km);
              m=km/1.66;
              printf("\nDistance in Miles Is Given By %f",m);
      }
      else if(a==2)
      {
            printf("\nEnter Distance in Miles :");
              scanf("%f",&m);
              km=m*1.66;
              printf("\nDistance in Kilometers Is Given By %f",km);
           
      }
      getch();
}
