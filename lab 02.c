#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,face1,face2;
    for( ; ; )
    {
    printf("\nEnter the number:");
    scanf("%d",&n);
    srand(time(0));
    face1=1+rand()%6;
    face2=1+rand()%6;
    if (n<1 || n>6)
    {
        printf("\nError");
    }
    else if(face1==n &&face2==n)
    {
        printf("\ndice:%d\ndice:%d",face1,face2);
        printf("\nYou Have won");
    }
    else
    {
         printf("\ndice:%d\ndice:%d",face1,face2);
        printf("\nYou Have lost");
    }
    }
}
