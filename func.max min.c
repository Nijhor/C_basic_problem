#include<stdio.h>

int max(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}
int min(int a,int b,int c)
{
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;
    else
        return c;
}

int main()
{
    int a,b,c;
    printf("Enter the numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Max is %d", max(a,b,c));
    printf("\nMin is %d", min(a,b,c));
}
