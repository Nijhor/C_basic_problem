#include<stdio.h>
char even(int x);

int main()
{
    int a;
    printf("Even=E AND Odd=O\n");
    printf("Enter the number");
    scanf("%d",&a);

    printf("%d number is %c",a,even(a));

}
char even(int x)
{
    char even='E';
    char odd='O';
    if(x%2==0)
        return even;
    else
        return odd;

}
