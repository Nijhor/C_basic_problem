#include<stdio.h>
int grade(int a[][3],int x,int y);
int main()
{
    int i,j,k,sum=0;
    int r[10][3];
    for(i=0;i<10;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Student-%2d(Test-%d): ",i+1,j+1);
            scanf("%d",&r[i][j]);
            if(r[i][j]<0 || r[i][j]>100)
            {
                printf("Wrong grade! Enter again: ");
                scanf("%d",r[i][j]);
            }
        }
    }
    printf("The grades are:%20s%9s%9s%10s","Test-1","Test-2","Test-3","Average");
    for(i=0;i<10;i++)
    {
        sum=0;
        printf("\nStudent-%2d:",i+1);
        for(j=0;j<3;j++)
        {
            sum=sum+r[i][j];
            printf("%9d",r[i][j]);
            if(j==2)
                printf("%90.2f",(float)(sum)/3);
        }
    }
    grade(r,10,3);
    for(k=0;k<=100;k++)
    {
        if(k==100)
        {
            printf("%5d:",k);
        }
        else if(k==0 || k%10==0)
        {
            printf("%2d-%2d:",k,k+9);
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<3;j++)
            {
                if(r[i][j]==k)
                {
                    printf("*");
                }
            }
        }
        if((k+1)%10==0)
        {
            printf("\n");
        }
    }
}
int grade(int a[][3],int x,int y)
{
    int i,j;
    int max=0,min=100;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            else if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("\nLowest grade in the grade book is %d",min);
    printf("\nHighest grade in the grade book is %d",max);
}
