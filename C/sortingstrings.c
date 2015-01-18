#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{     int i,n,j;
      char a[50][50],b[50];
      printf("Enter Number Of Strings : ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {    printf("\nEnter String :");
           fflush(stdin);
           gets(a[i]);
      }
      for(i=0;i<n;i++)
      {    for(j=1;j<n;j++)
                 {    if(stricmp(a[j-1],a[j])<0)
                         {  strcpy(b,a[j-1]);
                            strcpy(a[j-1],a[j]);
                            strcpy(a[j],b);                    
                         }
                 }
      }
      printf("SORTED STRINGS !! \n");
       for(i=0;i<n;i++)
      {    puts(a[i]);
      }
      
      
getch();
}
