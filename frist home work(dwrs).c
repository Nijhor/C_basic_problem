#include<stdio.h>
main(){
int grade=0,sum=0,i=0;
    int aplus=0,justa=0,fail=0;
    unsigned char charecter;

     if(grade>90)
       charecter ='A+';
     if(grade>80)
        charecter ='A';
    while(grade!=-1){
        scanf("%d",&grade);
        sum=sum+grade;
        i++;


        {if(grade>=60)
        {

         if(grade>90)
            aplus++;
          if(grade>80&&grade<90)
                justa++;
         }
         else
            fail++;}

   printf("\tNO.%d student's grade is%d and letter grade%c\n",i,grade,charecter);
    }

printf("num of A+ %d\n",aplus);

printf("num of A %d\n",justa);

printf("num of fail  %d\n",fail);
}
