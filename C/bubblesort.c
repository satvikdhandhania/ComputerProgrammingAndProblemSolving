#include<stdio.h> // ASCENDING ORDER 
#include<conio.h>
main()
{
      int a[50],i,j,temp,n;
      printf("\n Enter Array Size :");
      scanf("%d",&n);
      for(i=0;i<n;i++)
         {
                   printf("\nEnter Element %d :",i+1);
                   scanf("%d",&a[i]);                   
         }
      for(i=0;i<n;i++)         
         {
            for(j=1;j<n;j++)
            {   if(a[j-1]<a[j])
                  {   temp=a[j-1];
                      a[j-1]=a[j];
                      a[j]=temp;
                  }
            }
         }
      for(i=0;i<n;i++)
         {
                 printf("\nElement %d : %d",i+1,a[i]);
         }
      getch();
}
