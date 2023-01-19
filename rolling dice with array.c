#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define SIZE 7

int main()
{
    int face,roll,i;
    int f[7]={};

    srand(time(0));

    for(i=0;i<=6000;i++)
    {
        face=1+rand()%6;
        ++f[face];
    }
    printf("%s%17s\n","Face","Frequency");

    for(face=1;face<7;face++)
    {
        printf("%4d%17d\n",face,f[face]);
    }
    return 0;
}
