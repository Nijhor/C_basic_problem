#include<stdio.h>

int main()
{
    int n[10]={19,3,15,7,11,9,13,5,17,1},i,j;

    printf("%s %13s %17s","Element","Value","Histogram");

    for(i=0;i<n;i++)
    {
        printf("%d %13d          ",i,n[i]);
        for(j=1;j<=n[i];j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}
