#include <stdio.h>




int main(){


int num[50],temp,n;

printf("enter the size of table :");
scanf("%d",&n);
for(int i=0;i<n;i++){
    printf("enter the value %d :",i+1);
    scanf("\n%d",&num[i]);
}

for (int i = 0; i < n; i++){

for(int j=i+1;j<n;j++){

    if(num[i]>num[j]){
        temp=num[j];
        num[j]=num[i];
        num[i]=temp;

    }
}

}

for (int i = 0; i < n; i++)
{
    printf("\nthe value [%d]: %d",i+1,num[i]);
   
}

    return 0;
}