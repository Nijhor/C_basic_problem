#include<stdio.h>
int divbyseven(int x,int y)
{
    int count=0,i;
for(i=x;i<=y;i++)
{
   if(i%7==0)
    count++;
    }
  return count;
}
int divbyfive(int x,int y)
{
    int count=0,i;
for(i=x;i<=y;i++)
{
    if(i%5==0)
    count++;
    }
return count;
}
int main()
{
int x,y;
printf("Enter the two integers : ");
scanf("%d%d",&x,&y);

printf("count of numbers divisible by 5 = %d\n",divbyfive(x,y));
printf("count of numbers divisible by 7 = %d\n",divbyseven(x,y));
}
