#include<conio.h>
#include<stdio.h>
main()
{     int a,b,c,d,e;
      float avg;
      printf("\tWelcome To Grading System ! ");
      printf("\n Enter The Marks Of the student in 1st subject  :");
      scanf("%d",&a);      
      printf("\n Enter The Marks Of the student in 2nd subject  :");
      scanf("%d",&b);
      printf("\n Enter The Marks Of the student in 3rd subject  :");
      scanf("%d",&c);
      printf("\n Enter The Marks Of the student in 4th subject  :");
      scanf("%d",&d);
      printf("\n Enter The Marks Of the student in 5th subject  :");
      scanf("%d",&e); 
      avg=(a+b+c+d+e)/5;
      if(avg>=90)
           printf("Grade Is S");
      else if(avg<90&&avg>=80)
           printf("Grade Is A");
      else if(avg<80&&avg>=70)
           printf("Grade Is B");
      else if(avg<70&&avg>=60)
           printf("Grade Is C");
      else if(avg<60&&avg>=50)
           printf("Grade Is D");
      else if(avg<50)
           printf("Grade Is F");      
      getch();  
}
