#include<stdio.h>
#define SIZE 10
int range(int a[],int x);
int main()
{
    int i,j=1;
    int grade[SIZE];
    for(i=0;i<SIZE;i++)
    {
        printf("Enter grade for student-%d:",j++);
        scanf("%d",&grade[i]);
    }
    range(grade,SIZE);
    for(j=0;j<=100;j++)
    {
        if(j==100)
        {
            printf("%5d:",j);
        }
        else if(j==0 || j%10==0)
        {
            printf("%2d-%2d:",j,j+9);
        }
        for(i=0;i<10;i++)
        {
            if(grade[i]==j)
            {
                printf("*");
            }
        }
        if((j+1)%10==0)
        {
            printf("\n");
        }
    }
}
range(int a[],int x)
{
    int i,max,min,sum=0;
    max=a[0];
    min=a[0];
    for(i=1;i<x;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("\n\nClass average= %f\n",(float)sum/10.00);
    printf("Highest grade= %d",max);
    printf("\nLowest grade= %d\n\n",min);
}
