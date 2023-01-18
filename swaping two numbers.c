#include<stdio.h>
int main()
{
    int x=5,y=10,temp;
    int *a,*b;
    printf("Before swapping\n");
    printf("X=%d\n",x);
    printf("Y=%d\n",y);

    a=&x;
    b=&y;

    temp=*a;
    *a=*b;
    *b=temp;


    printf("After swapping\n");
    printf("X=%d\n",*a);
    printf("Y=%d\n",*b);
}
