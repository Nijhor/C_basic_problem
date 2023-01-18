#include<stdio.h>
void print(int n);

  int main(){
  int x;
  printf("enter how many lines:\t");
  scanf("%d",&x);
  print(x);
  }
void print(int n)
 {if(n==1)
 printf("\nHEllo world");
 else
 {printf("\nHEllo world");
  print(n-1);
 }

 }
