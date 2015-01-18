#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{     int i,n1,n2,k=0;
      char a[50],b[50],ch;
      printf("Enter String :");
      gets(a);
      printf("MENU\n1.Reverse\n2.String length\n3.Compare\n4.Contactinate Two Strings\n\t");
      scanf("%c",&ch);
      for(n1=0;a[n1]!='\0';n1++);
      switch(ch)
      {  case '1': for(i=0;i<n1/2;i++)
                      {  ch=a[i];
                         a[i]=a[n1-i-1];
                         a[n1-i-1]=ch;
                      }
                   printf("REVERSE STRING !!\n");
                   puts(a);
                   break;
         case '2':printf("STRING LENGTH = %d",n1);
                  break;
         case '3':printf("\n ENTER STRING 2 :");
                  fflush(stdin);
                  gets(b);   
                  for(n2=0;b[n2]!='\0';n2++);
                  if(n1!=n2)
                   printf("Srings Are Different !!!!");
                  else 
                    for(i=0;i<n1;i++)
                      {
                                     if(a[i]!=b[i])
                                       {
                                            printf("Strings are different ! ");
                                            break;                      
                                       }
                      }                  
                 if(i==n1)
                  printf("Strings Are Same !!!!! ");
                  break;
        case '4':printf("\n ENTER STRING 2 ");
                 fflush(stdin);
                  gets(b);   
                  for(n2=0;b[n2]!='\0';n2++);
                  i=n1;
                  while(i<50)
                  {  if(b[k]=='\0')
                       break;
                     else 
                      {
                           a[i++]=b[k++];
                                                  
                      }
                  }
                  printf("CONCATINATED STRING :");
                  puts(a);
                  break;
        case 'default': printf("WRONG INPUT !!! ");
                      break;
                
      }
getch();
}
