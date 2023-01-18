#include<stdio.h>
void what(int n);
int main()
{
    int x;
    scanf("%d",&x);
    what(x);
}

void what(int n)
{
    if(n==1)
        printf("Hello World\n");
    else
    {
        printf("Hellow World\n");
        what(n-1);
    }
}
