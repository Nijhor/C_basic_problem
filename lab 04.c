#include<stdio.h>
int main()
{
    int a[10],i,high,small;
    printf("Enter the Numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    high=a[0];
    small=a[0];
    for(i=0;i<10;i++)
    {
    if (a[i]>high)
        high=a[i];
    if (a[i]<small)
        small=a[i];
    }
    printf("Highest Number:%d",high);
    printf("\nLowest Number:%d",small);



}
