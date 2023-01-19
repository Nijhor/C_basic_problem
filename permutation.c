#include<stdio.h>
int fact(int x);
int main()
{
    int n,r,nCr;
    printf("Enter the value of n and r ");
    scanf("%d%d",&n,&r);
    nCr=fact(n)/fact(n-r);
    printf("The answer is %d",nCr);
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
        f=f*i;
    return f;
}
