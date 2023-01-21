#include<stdio.h>
int main(){
int row,a,c,s,x;
while(x!=-1){
scanf("%d",&x);
for(row=0;row<=x-1;row++)
{

    for(s=0;s<=row;s++)
        printf(" ");
    for(a=x-1;a>=row;a--)
       {

       printf("*");
         printf(" ");
        }
        printf("\n");

}
}

}
