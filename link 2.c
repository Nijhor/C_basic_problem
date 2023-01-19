#include<stdio.h>
int square(int x);
int main()
{
    int a;
    printf("Enter the Number");
    scanf("%d",&a);
    printf("The square value of %d is %d",a,square(a));
}
int square(int x)
{
    return x*x;
}
