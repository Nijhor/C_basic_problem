#include<stdio.h>
int main()
{
    int a[10]={40,88,32,67,100,89,98,75,82,69};
    int i,j,temp;
    printf("phy num of 10 students:");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorting array is:\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
