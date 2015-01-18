#include<conio.h>
#include<stdio.h>
main()
{
      int a[50],n,temp,i;
       printf("Enter Array  Size ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
           {
                       printf("\n Enter Element %d :",i+1);
                       scanf("%d",&a[i]);            
           }
       for(i=0;i<n/2;i++)
         {               
             temp=a[i];
             a[i]=a[n-i-1];
             a[n-1-i]=temp;
                        
         }   
       for(i=0;i<n;i++)
           {
                       printf("\n Element %d :%d",i+1,a[i]);
                                 
           }                               
       getch();
}

