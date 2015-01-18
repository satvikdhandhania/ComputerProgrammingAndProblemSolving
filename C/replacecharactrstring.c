#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{     int i;
      char a[50],ch1,ch2;
      printf("Enter String :");
      gets(a);
      printf(" \n Enter Character To Be Replaced  & then Character to be replacing it :");
      scanf("%c %c",&ch1,&ch2);   
      for(i=0;a[i]!='\0';i++)
      {  if(a[i]==ch1)
          a[i]=ch2;
      }
      printf("MODIFIED STRING =");
      puts(a);    
getch();
}
