#include<stdio.h>
int main()
{
    int x=5;
    int y=10;
    int *p;

    p=&x;

    printf("value of x=%d\n",x);
    printf("Address of x=%d\n",&x);
    printf("Address of p=%d\n",p);
    printf("content of p=%d\n",*p);
    printf("Address of p=%d\n",&p);

    }
