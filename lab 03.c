#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[50],i,even=0,odd=0,sum=0;
    printf("Arrays are:");
    srand(time(0));
    for(i=0;i<=50;i++)
    {
        a[i]=1+rand()%50;
        printf("%d  ",a[i]);
    }
    if(a[i]%2==0)
    {

        even++;
    }
    else
    {
        odd++;

    }
    sum=even-odd;
    printf("\nDifference of Even and Odd number is %d",sum);

}
