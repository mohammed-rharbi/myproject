#include <stdio.h>



int main(){

int arr[50], n ,t;

printf("enter the number of table :");
scanf("%d",&n);

for(int i=0;i<n;i++){
    printf("enter the value [%d] :",i+1);
    scanf("%d",&arr[i]);
}

for(int i=0;i<n;i++){

    for(int j=i+1;j<n;j++){

        if(arr[i]<arr[j]){

           t=arr[i];
           arr[i]=arr[j];
           arr[j]=t;

        }
    }
}


for(int i=0;i<n;i++){
    printf("%d,",arr[i]);
}



    return 0;
}











