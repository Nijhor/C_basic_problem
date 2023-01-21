#include<stdio.h>
int main(){
int n,i,j,k;

printf("enter matrix size:\t");
scanf("%d",&n);
int mat[n][n];

printf("\n enter %d input for the  matrix :\t",n*n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        scanf("%d",&mat[i][j]);
}
  printf("\n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
        printf("%d ",mat[i][j]);
      printf("\n");
}

int sum=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      {
          if(i==j)
        sum=sum+mat[i][j];}

}
 printf("\n Sum  of Primary diagonal of the matrix=%d",sum);}
