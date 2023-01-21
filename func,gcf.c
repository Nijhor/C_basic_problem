#include<stdio.h>
int gcf(int a,int b);
int min(int a,int b);

int main(){
int a,b;
while(a!=-1){
printf("\n enter:");
scanf("%d%d",&a,&b);
printf("\n answer:\t %d",gcf(a,b));
}
}

int gcf(int a,int b){
    int i;
for(i=min(a,b); ;i-- )


   if(a%i==0&&b%i==0)
    return i;
}
int min(int a,int b){
if(a<b)
    return a;
else
    return b;

}
