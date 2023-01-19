#include<stdio.h>
#include<stdlib.h>
int main()
{
    int head=0,teal=0,face,thro;
    for(thro=1;thro<=1000;thro++)
    {
        srand(time(0));
        face=1+rand()%2;
        switch(face)
        {
        case 1:
            ++head;
            break;
        case 2:
            ++teal;
            break;
        }
    }
    printf("%s%10s\n","Head","Teal");
    printf("   %d%10d",head,teal);
}
