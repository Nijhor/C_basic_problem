#include<stdio.h>
int num(int n);
int main()
{
    int a;
    printf("Enter Integer:");
    scanf("%d",&a);
    printf("Summation:%d",num(a));

}
int num(int n)
{
    if(n!=0)
        return n+num(n-1);
    else
        return n;
}
