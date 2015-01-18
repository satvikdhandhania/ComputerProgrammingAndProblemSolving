#include<conio.h>
#include<stdio.h>
main()
{     int a=0;
      float ctmp,ftmp;
      printf("\nEnter Whether You want in fahrenheit(1) or celcius(2)");
      scanf("%d",&a);
      if(a==1)
      {       printf("\nEnter Temperature in Celcius :");
              scanf("%f",&ctmp);
              ftmp=(9.0*(ctmp/5.0))+32.0;
              printf("\nTemperature in Fahrenheit Is Given By %f",ftmp);
      }
      else if(a==2)
      {
            printf("\nEnter Temperature in fahrenheit :");
              scanf("%f",&ftmp);
              ctmp=5.0*((ftmp-32.0)/9.0);
              printf("\nTemperature in Celcius Is Given By %f",ctmp);
           
      }
      getch();
}
