#include<stdio.h>
int maximum(int x,int y,int z);
int minimum(int x,int y,int z);
int main()
{
    int a,b,c;
    printf("Enter the Numbers");
    scanf("%d%d%d",&a,&b,&c);

    printf("Maximum number is:%d\n",maximum(a,b,c));
    printf("Minimum number is %d",minimum(a,b,c));
}
int maximum(int x,int y,int z)
{
    if(x>y && x>z)
        return x;
    else if(y>z)
        return y;
    else
        return z;
}
int minimum(int x,int y,int z)
{
    if(x<y && x<z)
        return x;
    if(y<x && y<z)
        return y;
    if(z<x && z<y)
        return z;
}
