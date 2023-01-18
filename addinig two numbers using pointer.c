#include<stdio.h>
int main()
{
    int x=10,y=20,sum;

    int *a,*b;

    a=&x;
    b=&y;

    sum=*a+*b;

    printf("sum of the number is %d\n",sum);



}
