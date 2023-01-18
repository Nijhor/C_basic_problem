#include<stdio.h>

int fact(int f);
int comb(int n,int k);

int main(){
    int i,j,k,num;

    printf("Enter Number of Rows: ");
    scanf("%d",&num);

    for(i=0;i<num;i++){

        for(k=0;k<=(num-i-2);k++){
            printf(" ");
        }

        for(j=0;j<=i;j++){
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
return 0;
}




int fact(int f){  /// function returning factorial of f

    int i,fact=1;
    for(i=0;i<=f;i++){
        if(i==0 || i==1){
            fact=1;
        }
        else{
            fact=fact*i;
        }
    }

    return fact;
}

int comb(int n,int k){ /// function returning combination of nCk ( n choose k )
    int combination = fact(n)/(fact(k)*fact(n-k));
    return combination;
}
