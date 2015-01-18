#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,temp,n,a[50];
      printf("\n Enter Array size :");
      scanf("%d",&n);
      printf("\n Enter Array :");
      for(i=0;i<n;i++)
        scanf("%d",&a[i]);
      for(i=0;i<n;i++)         
         {
            for(j=1;j<n;j++)
            {   if(a[j-1]>a[j])
    
                  {   temp=a[j-1];
                      a[j-1]=a[j];
                      a[j]=temp;
                  }
            }
         }
      printf("\nSORTED ARRAY !!\n ");
       for(i=0;i<n;i++)
        printf(" %d ",a[i]);
       for(i=0;i<n;i++)
       {  if(a[i]==a[i+1])
            { for(j=i;j<n;j++)
               {   
                   a[j]=a[j+1];           
               } 
               n--;
               i--;   
            }                               
       }
       printf("\n Final Array :");
       for(i=0;i<n;i++)
        printf(" %d ",a[i]);
 getch();
}   
