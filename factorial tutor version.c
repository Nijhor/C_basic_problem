
#include<stdio.h>
int main(){
int i, x, fact;

for( ; ; )
    {
    printf("Enter a Number: ");
    scanf("%d",&x);

    if(x==-1){
        break;
    }
    else if(x==0){
        fact=1;
        printf("%d\n",fact);
    }
    else{
         fact=1;

         for(i=1;i<=x;i++){
            fact=fact*i; /// or you can write fact*=i; both are correct
         }

         printf("%d\n",fact);
    }

}
return 0;

}
