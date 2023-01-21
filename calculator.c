#include<stdio.h>
int main(){

int x,y,g,sum;
float avg;
for(;;){

   printf("enter first number\n");
   scanf("%d",&x);

    g=getchar();
   printf("enter operation\n");
   scanf("%c",&g);
    printf("enter 2nd number\n");
    scanf("%d",&y);

     switch(g){
       case '+':
           sum=x+y;
           printf("  sum= %d\n",sum);
            break;




      case '-':
            sum=x-y;
             printf("  sum= %d\n",sum);
             break;


      case '*':
           sum=x*y;
           printf("  sum= %d\n",sum);
           break;


      case '/':
           avg=(float)x/y;
            printf("  sum= %2f\n",avg);
             break;


     case '%':
            sum=x%y;
             printf("  sum= %d\n",sum);
             break;

     default:
            printf("try again");
            break;}

}}











