#include<stdio.h>
int main()
{
    int i, n, lar,sm, elem;
    printf ("Enter first  \n");
    scanf ("%d", &n);

 lar = n;
sm=n;

    for (;;)
    {
        printf ("\n Enter another number \n");
        scanf ("%d",&n);

        if(n==-1)
            break;

        if (n>lar)
        lar=n;
        if (n<sm)
        sm=n;
    }
       printf ("\n The largest number is %d", lar);
    printf ("\n The smallest number is %d", sm);
    printf ("\n The difference is %d", lar-sm);

    return 0;
}
