#include<stdio.h>
int fact(int x);
int main()
{
    int n,sum1;
    printf("Enter the value of n");
    scanf("%d",&n);
    sum1=fact(n)/n;
    printf("result %d",sum1);

}
int fact(int x)
{
    int i,f=1,sum;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    sum=sum+i;
}
