#include<stdio.h>
int main()
{
    int i,j,n,p=0,q=0,m,dif;
    printf("Enter elements:");

    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                p=p+a[i][j];
            if((i+j)==(n-1))
                q=q+a[i][j];
        }
    }
    printf("\nSum of primary diagonal :%d",p);
     printf("\nSum of secondary diagonal :%d",q);
     dif=p-q;
     printf("\nDifference of primary and secondary diagonal:%d",dif);
}

