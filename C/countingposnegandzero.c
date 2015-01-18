#include<conio.h>
#include<stdio.h>
main()
{
      int a[50],n,i,pos=0,neg=0,zer=0;
       printf("Enter Array  Size ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
           {
                       printf("\n Enter Element %d :",i+1);
                       scanf("%d",&a[i]);            
           }
       for(i=0;i<n;i++)
           {
                       if(a[i]>0)
                           pos++;      
                       if(a[i]<0)
                           neg++; 
                       if(a[i]=0)
                           zer++;                    
           }                               
           printf(" Positive : %d \n Negative :%d \n Zero :%d",pos,neg,zer);
getch();
}

