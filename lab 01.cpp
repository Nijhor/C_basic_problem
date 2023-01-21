#include<stdio.h>
int cal(int x,int y);
int main()
{
    int a,b;
    printf("Enter the first integer");
    scanf("%d",&a);
    printf("Enter the second integer");
    scanf("%d",&b);
    printf("The count of number divisible by %d and %d is:%d",a,b,cal(a,b));

}
int cal(int x,int y)
{
    int i,c=0;
    for(i=x;i<=y;i++)
    {
        if(i%5==0 && i%7==0)
        {
            c++;
        }
    }
    return c;
}
