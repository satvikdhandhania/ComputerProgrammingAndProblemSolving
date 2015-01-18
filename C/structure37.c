#include<conio.h>
#include<stdio.h>
struct ebill
{
        int custno,pread,cread,tread;
        float amt;
}a[5];
main()
{     int i;
      for(i=0;i<5;i++)
        {
          printf("Enter Customer No :");
          scanf("%d",&a[i].custno);            
            printf("Enter Previous Reading  :");
          scanf("%d",&a[i].pread);            
          printf("Enter Current Reading:");
          scanf("%d",&a[i].cread); 
          a[i].tread=a[i].pread+a[i].cread;
          if(a[i].tread<=100)
            a[i].amt=(float)1.0*a[i].tread;
          else if(a[i].tread>100&&a[i].tread<=200)
            a[i].amt=(float)2.0*a[i].tread;
          else if(a[i].tread>200&&a[i].tread<=300)
            a[i].amt=(float)3.0*a[i].tread;              
          else if(a[i].tread>300)
            a[i].amt=(float)5.0*a[i].tread;
        }
        for(i=0;i<5;i++)
         printf(" Customer no = %d\t Total Reading =%d \tAmount =%f\n",a[i].custno,a[i].tread,a[i].amt);
      
getch();
}
