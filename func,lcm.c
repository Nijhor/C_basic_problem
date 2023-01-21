#include<stdio.h>
int lcf(int a,int b);
int max(int a,int b);

int main(){
int a,b;
while(a!=-1){
printf("\n enter:");
scanf("%d%d",&a,&b);
printf("\n answer:\t %d",lcf(a,b));
}
}

int lcf(int a,int b){
    int h,i;
for(i=max(a,b); ;i++)


   if(i%a==0&i%b==0)

    return i;
}
int max(int a,int b){
if(a>b)
    return a;
else
    return b;

}
