#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,dice1,dice2;
printf("Enter a number between 1 to 6 : ");
scanf("%d",&x);
while(x!=-1)
{
   dice1=1+rand()%6;
    dice2=1+rand()%6;
    printf("\n dice1= %d      dice2= %d",dice1,dice2);
 if(x==dice1 && x==dice2)
 {
    printf("\nYOU WIN!!!!");
 }
 else {
    printf("\nYOU LOSE!!!!");
    }
    printf("\nEnter a number between 1 to 6 : ");
scanf("%d",&x);
}
return 0;
}
