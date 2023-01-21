
#include<stdio.h>

main(){
int c,n,fact;
while(n!=-1)
{printf("Enter a num:\t");

 scanf("%d",&n);
 if(n!=-1){

     fact=1;
     for(c=1;c<=n;c++)

        fact=fact*c;
       printf("\n Factorial of %d is = %d\n",n,fact);}
      }

    }
