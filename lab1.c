#include<stdio.h>

float area(float r)
{
    return ((3.1416)*r*r);
}
int x(float area)
{
    if(area>25)
        printf("\nGreater");
    else
        printf("\nLess");
}
int main()
{


float r;
printf("Enter the radius of the circle:");
scanf("%f",&r);

printf("The area of the circle is:%.2f",area(r));
x(area(r));
}
