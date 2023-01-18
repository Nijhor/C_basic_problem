#include<stdio.h>
int main()
{
    int i,j,k,s=60;
    int data[5];
    for(i=0;i<5;i++)
    {
        if(i==0)
        {
            printf("  <%d:",s);
            scanf("%d",&data[i]);
        }
        else
        {
            printf("%d-%d:",s-9,s=s+10);
            scanf("%d",&data[i]);
        }
    }
    char fillChar[10][10];
    for(j=0;j<5;j++)
    {
        for(k=0;k<7;k++)
        {
            if(k<(7-(data[j])))
            {
                fillChar[j][k]=' ';
            }
            else
            {
                fillChar[j][k]='*';
            }
        }
    }
    for(j=0;j<7;j++)
    {
        for(k=0;k<5;k++)
        {
            printf("%c ",fillChar[k][j]);
        }
        printf("\n");
    }
}
