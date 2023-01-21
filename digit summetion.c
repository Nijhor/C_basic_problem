#include<stdio.h>
int main(){
int digit,t,n,i=0,sum;
for(;;){
         printf("\n enter a number \t");
    scanf("%d",&digit);
    sum=0;
    if(digit==-1)
        break;
    while(digit!=0)
       {

        sum=sum+digit%10;

         digit=digit/10;
        }
         printf("\n answer %d",sum);

}




}




