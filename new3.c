#include<stdio.h>
#include<stdlib.h>
int main(){
int user,arr[50];
int i,j;

for(i=0;i<10;i++){
    arr[i]=1+rand()%50;
    printf("%d ",arr[i]);
}
printf("\n ");
while(user!=-1){
        printf("\n ");
    scanf("%d",&user);
 if(user!=-1)

 {
    for(j=0;j<10;j++){
        if(arr[j]==user)
          {

            break;}

           }
    if(arr[j]==user)
          {
            printf("\n%d is present in the array\n",user);
            }
        else
           {printf("\n%d is NOT  present in the array",user);

    }
 }


}
}
