#include<stdio.h>
#define SIZE 100
int main()
{
    int i,j,n,c=0;
    int x[50];
    int y[SIZE];
    for(i=0;i<50;i++)
    {
        x[i]=1+rand()%50;
        printf("%d\n",x[i]);
    }
    for(j=0;j<SIZE;j++)
    {
        y[j]=0;
        scanf("%d",&n);
        if(n==-1)
            break;
        for(i=0;i<50;i++)
        {
            if(n==x[i])
            {
                y[j]=x[i];

            }
        }
        c++;

    }
    for(j=0;j<c;j++)
    {
        if(y[j]==0)
            printf("\nNot Found");
        else
            printf("\nFound");
    }
}
