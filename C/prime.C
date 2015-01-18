#include<stdio.h>
#include<conio.h>
main ()
{   int i=1,n;
    printf("Enter The Number You Want To Check:");
    scanf("%d",&n);
    if(n==1)
            printf("\n1 is not a prime number !");
    else
     {  i=2;
           while(i<n)
           {         if(n%i==0)
                        {   printf("\nNot A Prime Number ");      
                            break;        
                        } 
                      i++;
           }
        if(i==n)
        printf("Prime Number !");
    }
    getch();
}

