#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{     int i,n1,k=0;
      char a[50],b[50];
      printf("Enter String 1 :");
      gets(a);
      n1=strlen(a);
      
      for(i=n1-1;i>=0;i--)
        b[k++]=a[i];
       b[k]='\0';                      
      printf("REVERSE STRING !!\n");
      puts(b);
      if(stricmp(a,b)==0)
        printf("STRING IS PALLINDROME !!! ");
      else
        printf("STRING IS NOT PALLINDROME !! ");  
getch();
}
