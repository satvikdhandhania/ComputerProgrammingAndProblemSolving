#include<conio.h>
#include<process.h>
#include<stdio.h>
main()
{ int i,j,a[50][50],r,c,b[50];
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
       {   b[i]=0;
            for(j=0;j<c;j++)
           {  b[i]+=a[i][j];
              printf("\t %d",a[i][j]);
           }
           printf("\n"); 
       }
     printf("SUM OF MATRIX !!\n ");
     for(i=0;i<r;i++)
       { 
            printf("%d \n",b[i]);
       }        
 getch();     
}
