#include<stdio.h>
void print(int n);

  int main(){
  int x;
  printf("Enter how many lines you want:\t");
  scanf("%d",&x);
  print(x);
  }
void print(int n)
 {if(n==1)
 printf("\nHello World!");
 else
 {printf("\nHello World!");
  print(n-1);
 }

 }
