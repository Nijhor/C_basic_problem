#include<stdio.h>
#define SIZE 1000
int main()
{
    int n,i,j,top1,top2,top3;
    int mark[SIZE];
    printf("Enter mark(-1 to terminate): ");
    scanf("%d",&n);
    for(i=0;i<SIZE;i++)
    {
        if(n==-1)
        {
            break;
        }
        mark[i]=n;
        printf("Enter mark(-1 to terminate):");
        scanf("%d",&n);
    }
    top1=mark[0];
    for(j=1;j<i;j++)
    {
        if(mark[j]>top1)
        {
            top1=mark[j];
        }
    }
    top2=mark[1];
    for(j=0;j<i;j++)
    {
        if(j==1)
        {
            continue;
        }
        else if(mark[j]!=top1 && mark[j]>top2)
        {
            top2=mark[j];
        }
    }
    top3=mark[2];
    for(j=0;j<i;j++)
    {
        if(j==2)
        {
            continue;
        }
        else if(mark[j]!=top1 && mark[j]!=top2 && mark[j]>top3)
        {
            top3=mark[j];
        }
    }
    printf("first 3 highest numbers are %d %d %d",top1,top2,top3);
}
