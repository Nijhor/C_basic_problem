#include<stdio.h>
int main()
{
    int a[50],i,j,p=0,q=0,n;
    printf("enter element:");
    for(i=0;;i++)
    {
        scanf("%d",&a[i]);
        p++;
        if(a[i]==-1)
            break;

    }
    for (i=0;i<p;i++)
    {
       for (j=i+1;j<p;j++)
       {
           if(a[i]==a[j])
           {
               n=a[i];
               break;

           }
       }
    }
    for(i=0;i<p;i++)
    {
        if(a[i]==n)
        {
           q++;

        }

    }
    if(q==0)
        printf("none");
    else
        printf("\n\n %d  %d",n,q);
}

