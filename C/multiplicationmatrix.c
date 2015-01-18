#include<conio.h>
#include<stdio.h>
main()
{     int a[50][50],b[50][50],c[50][50],i,j,k,c1,r1,r2,c2;
         printf("\n Enter Size of Array 1(columns then rows):");
         scanf("%d %d",&c1,&r1);
         printf("\n Enter Size of Array 2(columns then rows):");
         scanf("%d %d",&c2,&r2);
         if(c1!=r2)
           {  printf("\nWrong Input :"); 
              getch();
              exit(0);
           } 
         else 
          for(i=0;i<r1;i++)
           for(j=0;j<c1;j++)
           {  printf("\n Enter Element for array 1 :");
              scanf("%d",&a[i][j]); 
           }
         for(i=0;i<r2;i++)
           for(j=0;j<c2;j++)
           {  printf("\n Enter Element for array 2 :");
              scanf("%d",&b[i][j]); 
           }    
         for(i=0;i<r1;i++)
           for(j=0;j<c2;j++)
            { c[i][j]=0;
             for(k=0;k<c1;k++)
             {   
                 c[i][j]+=a[i][k]*b[k][j];
             }                 
            }
         printf("\tMATRIX MULTIPLICATION \n");
         for(i=0;i<r1;i++)
          {
            for(j=0;j<c2;j++)
              {  printf("\t %d",c[i][j]);             
              }     
           printf("\n");
         } 
      getch();      
}
