#include<stdio.h>


int main(){
int a[100]={-9};


int i=0,j,count=0,dup,k=0,n,tc=0;


for( ; ; ){ /// Taking Inputs
    printf("Enter a number(-1 to exit): ");
    scanf("%d",&n);
    if(n==-1){
        break;
    }
    else{
        a[i]=n;
        i++;
    }
}


tc=i;


while(tc>0){

    count = 0;
    dup = -9;


    for(j=0;j<i;j++){ /// Checking Duplicates
        for(k=j+1;k<i;k++){
            if(a[j]==a[k] && a[j] != -9){
                dup=a[j];
                break;
            }
        }
    }



    for(j=0;j<=i;j++){ /// Counting Duplicates And Marking Them By Assigning -9
        if(a[j]==dup && dup != -9){
            count++;
            a[j]= -9;
        }
    }



    if(dup != -9 && count != 0){
        printf("\n%d occurs %d times\n",dup,count);
    }

tc--;
}



return 0;
}
