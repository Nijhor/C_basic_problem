#include<stdio.h>

char function(int n);
int main(){
int x;
while(x!=-1){
    printf("\n enter an integer:\t");
    scanf("%d",&x);
    printf("\n %c",function(x));

}


}


char function(int n){
char even='e';
char odd='o';
if(n%2==0)
return even;
else
return odd;
}
