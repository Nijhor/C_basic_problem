#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[50],i,dif,sum1=0,sum2=0;

 for(i=0; i<50; i++)
    {
        a[i]=1+rand()%50;
        printf("%d  ",a[i]);

        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else if(a[i]%2!=0)
        {
            sum2=sum2+a[i];
        }
    }
        printf("\nThe sum of even : %d ",sum1);
         printf("\nThe sum of odd : %d",sum2);
        dif=sum1-sum2;
        printf("\nThe difference between even and odd is : %d" ,dif);

return 0;
}
