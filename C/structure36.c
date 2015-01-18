#include<conio.h>
#include<stdio.h>
struct student
{
        int regno,m1,m2,m3,tot;
        float avg;
        char grd;

}a[5];
main()
{     int i;
      for(i=0;i<5;i++)
        {
          printf("Enter Reg No :");
          scanf("%d",&a[i].regno);            
            printf("Enter Marks 1  :");
          scanf("%d",&a[i].m1);            
          printf("Enter Marks 2:");
          scanf("%d",&a[i].m2);            
          printf("Enter Marks 3:");
          scanf("%d",&a[i].m3);
          a[i].tot=a[i].m1+a[i].m2+a[i].m3;
          a[i].avg=a[i].tot/3;
          if(a[i].avg>=90)
            a[i].grd='S';
          else if(a[i].avg>=80&&a[i].avg<90)
            a[i].grd='A';
          else if(a[i].avg>=70&&a[i].avg<80)
            a[i].grd='B';              
          else if(a[i].avg>=60&&a[i].avg<70)
            a[i].grd='C';
          else if(a[i].avg>=50&&a[i].avg<60)
            a[i].grd='D';
           else if(a[i].avg<50)
            a[i].grd='F';
        }
        for(i=0;i<5;i++)
         printf(" Reg no = %d\t Total =%d \tGrade =%c\n",a[i].regno,a[i].tot,a[i].grd);
      
getch();
}
