#include<stdio.h>
int main()
{
    int nofr,nofc,i,j;
    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of Rows and Columns");
    scanf("%d %d",&nofr,&nofc);

    for(i=0;i<nofr;i++)
    {
        for(j=0;j<nofc;j++)
        {
            printf("A[%d][%d] =",i,j);
            scanf("%d",&A[i][j]);

        }

    }
    printf("\n");

    for(i=0;i<nofr;i++)
    {
        for(j=0;j<nofc;j++)
        {
            printf("B[%d][%d] =",i,j);
            scanf("%d",&B[i][j]);

        }
    }
    printf("A  =");
    for(i=0;i<nofr;i++)
    {
        printf("\t");
        for(j=0;j<nofc;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     printf("B  =");
    for(i=0;i<nofr;i++)
    {
        printf("\t");
        for(j=0;j<nofc;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<nofr;i++)
    {

        for(j=0;j<nofc;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }

    }
      printf("C  =");
    for(i=0;i<nofr;i++)
    {
        printf("\t");
        for(j=0;j<nofc;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
