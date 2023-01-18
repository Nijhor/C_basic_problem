#include<stdio.h>
int devisiblebyseven(int x,int y);
int devisiblebyfive(int x,int y);
int main(){
int x,y;

scanf("%d%d",&x,&y);
printf("count of numbers divisible by 5=%d\n",devisiblebyfive(x,y));
printf("count of numbers divisible by 7=%d\n",devisiblebyseven(x,y));


}
int devisiblebyfive(int x,int y){
int count=0;
int i;
for(i=x;i<=y;i++)
{if(i%5==0)
    count++;}

return count;
}
int devisiblebyseven(int x,int y){
int count=0;
int i;
for(i=x;i<=y;i++)
{if(i%7==0)
    count++;}

return count;
}
