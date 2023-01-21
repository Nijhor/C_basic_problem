#include<stdio.h>
#include<math.h>
int main(){
int num,x=0,c,k;
int t;
double m=0.0;
scanf("%d",&num);
 k=num;
while(k!=0){

    k=k/10;
    ++x;}
    printf(" x=%d\n",x);
    k=num;
    while(k!=0){

        t=k%10;
        printf("t=%d\n",t);
        printf("pow %d =%lf",t,pow(t,x));
        m+=pow(t,x);
printf("\n%lf\n",m);
        k/=10;

    }
    if(m==num)
        printf("\n amsterdan");
    else
        printf("\n not !!!!!");

}















