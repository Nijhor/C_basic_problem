#include<stdio.h>

int function(int n);
int main(){
int x;
int result;
while(x!=-1){
    printf("\n enter an integer:\t");
    scanf("%d",&x);
    result=function(x);
    if(result==1)
    printf("\n%d is even number.",x);
    else
       printf("\n%d is odd number.",x);
}


}


int function(int n){

if(n%2==0)
return 1;
else
return 0;
}
