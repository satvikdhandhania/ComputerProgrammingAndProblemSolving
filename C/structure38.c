#include<conio.h>
#include<stdio.h>
struct emp
{
        int empno,bpay;
        float hra,da,netpay;
}a[5];
main()
{     int i;
      for(i=0;i<5;i++)
        {
          printf("Enter Customer No :");
          scanf("%d",&a[i].empno);            
          printf("Basic Pay :");
          scanf("%d",&a[i].bpay); 
          if(a[i].bpay<15000)
           {
           a[i].da=(float)(0.3*a[i].bpay);
           a[i].hra=(float)(0.1*a[i].bpay);
           a[i].netpay=a[i].da+a[i].hra+a[i].bpay;            
           }
          else if(a[i].bpay>=15000)
           {
           a[i].da=(float)(0.5*a[i].bpay);
           a[i].hra=(float)(0.2*a[i].bpay);
           a[i].netpay=a[i].da+a[i].hra+a[i].bpay;
           }
        }
        for(i=0;i<5;i++)
         printf(" Employee no = %d\t Netpay =%f\n",a[i].empno,a[i].netpay);
      
getch();
}
