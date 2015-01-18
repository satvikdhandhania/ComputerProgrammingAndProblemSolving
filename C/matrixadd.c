#include<conio.h>
#include<stdio.h>
main()
{     int a[50][50],b[50][50],c[50][50],d[50][50],i,j,n;
         printf("\n Enter Size of Array :");
         scanf("%d",&n);
         for(i=0;i<n;i++)
           for(j=0;j<n;j++)
           {  printf("\n Enter Element for array 1 :");
              scanf("%d",&a[i][j]); 
           }
         for(i=0;i<n;i++)
           for(j=0;j<n;j++)
           {  printf("\n Enter Element for array 2 :");
              scanf("%d",&b[i][j]); 
           }    
         printf("\n\t MATRIX ADDITION\n");
         for(i=0;i<n;i++)
           {
           for(j=0;j<n;j++)
           {
                 c[i][j]=a[i][j]+b[i][j];
                 printf("\t%d",c[i][j]);
           }   
            printf("\n");
           }
         printf("\n\t MATRIX SUBTRACTION\n");
         for(i=0;i<n;i++)
           {
           for(j=0;j<n;j++) 
           {
                 d[i][j]=a[i][j]-b[i][j];
                 printf("\t%d",d[i][j]);
           }   
            printf("\n");
           }
      getch();      
}
