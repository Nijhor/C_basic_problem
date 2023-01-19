#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix :");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
       printf("Error.C1 is not equal to R2 ");

        printf("Enter rows and column for first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for second matrix :");
    scanf("%d %d",&r2,&c2);

    }
    printf("Enter First Matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("First Matrix[%d][%d]",i,j);
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter Second Matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Second Matrix[%d][%d]",i,j);
            scanf("%d", &second[i][j]);
        }
    }
    //multiply
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
          for(k=0;k<c1;k++)
          {
          sum=sum+first[i][k]*second[k][j];

          }
          result[i][j]=sum;
          sum=0;


        }
    }


    printf("\n\nFirst Matrix=");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t");
            printf("%d",first[i][j]);
        }
        printf("\n");
    }
     printf("\n\nSecond Matrix=");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t");
            printf("%d",second[i][j]);
        }
        printf("\n");
    }
     printf("\n\nResult Matrix=");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t");
            printf("%d",result[i][j]);
        }
        printf("\n");
    }

}
