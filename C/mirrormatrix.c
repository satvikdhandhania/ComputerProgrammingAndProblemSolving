#include<conio.h>
#include<stdio.h>
main()
{ int i,j,a[50][50],r,c;
    printf("\nEnter No of Rows :");
    scanf("%d",&r);
    
    printf("\nEnter No of columns :");
    scanf("%d",&c);
    
    
    for(i=0;i<r;i++)
           for(j=0;j<c;j++)
           {  printf("\n Enter Element for array :");
              scanf("%d",&a[i][j]); 
           }
    printf("\tORIGINAL MATRIX \n");
    for(i=0;i<r;i++)
       {    for(j=0;j<c;j++)
           {  
              printf("\t %d",a[i][j]);
           }
           printf("\n"); 
       }
     
    printf("\t MIRROR MATRIX \n");    
    for(i=0;i<r;i++)
       {    for(j=c-1;j>=0;j--)
           {  
              printf("\t %d",a[i][j]);
           }
           printf("\n"); 
       }        
 getch();     
}
