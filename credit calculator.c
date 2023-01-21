#include<stdio.h>
void main(){
float Begining_balance,total_charge,credit,new_balance,credit_limit;
int acc;
while(Begining_balance!=-1)
{  new_balance=0;
    printf("\n\nEnter account number: ");
    scanf("%d",&acc);
    printf("\nEnter Begining_balance: ");
    scanf("%f",&Begining_balance);
    printf("\nEnter total_charge: ");
    scanf("%f",&total_charge);
    printf("\n Enter credit : ");
    scanf("%f",&credit);
     printf("\nEnter credit_limit: ");
    scanf("%f",&credit_limit);

    new_balance=(Begining_balance+total_charge)-credit;
    printf("\n\n\n");
      printf("\n account number :%d",acc);
      printf("\n Credit limit :%f",credit_limit);
      printf(" \nBalance :%f",new_balance);
      if(new_balance>credit_limit)
      printf("\nCredit limit excedded");
}



}
