#include<conio.h>
#include<stdio.h>
main()
{
      int a[50],n,i,big,small;
       printf("Enter Array  Size ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
           {
                       printf("\n Enter Element %d :",i+1);
                       scanf("%d",&a[i]);            
           }
           big=small=a[0];
       for(i=1;i<n;i++)
           {  if(a[i]>big)
                 big=a[i];                         
              if(a[i]<small)
                 small=a[i];  
           }                
       printf("\n Biggest Element : %d \n Smallest Element :%d ",big,small);                   
           
getch();
}

