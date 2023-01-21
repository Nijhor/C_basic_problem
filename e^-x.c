#include<stdio.h>
#include<math.h>
int main(){
int n,k,x,a,z;
int b;
float sum=0.0;
for(;;)
{  a=1;
z=1;
    printf("\n Enter number of terms\n");
    scanf("%d",&n);
    printf("\n value of X\n");
    scanf("%d",&b);
 printf("1+");
    sum=sum+1;
k=n-1;
   for(x=1;x<=k;x++)
    {
    a=a*b;
    z=z*x;
   if(x==1||x<k)
printf("%d/%d!+",a,x);
    if(x==k)
   printf("%d/%d!",a,x);

sum=sum+a/z;
}
printf(" \nsummetion of series=%.2f",sum);
}



}
