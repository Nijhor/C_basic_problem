#include<stdio.h>
int main(){
float hour,salary=0,rate,ex_hour;
int employee;
while(employee!=-1){

        printf("\nenter employee code");
        scanf("%d",&employee);

      printf("\nHours worked\n");
        scanf("%f",&hour);
     printf("\n hourly rate\t");
        scanf("%f",&rate);
         if(hour<=40)
         salary=hour*rate;
        if(hour>40)
        {
            ex_hour=hour-40;
            salary=rate*40+(ex_hour*(rate*1.5));


        }


        printf("\nEmployee code: %d",employee);

        printf("\nhours :%.2f",hour);
         printf("\n Salary :%.2f",salary);









}



}
