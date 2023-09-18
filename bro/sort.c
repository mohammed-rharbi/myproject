#include <stdio.h>

//find the largest number in serie


int main (){


int num []={33,3,6,8,9};
int x,a;

for(int i=0;i<5 - 1;i++){

for(int j=i+1;j<5;j++){

if(num[i]<num[j]){

    x=num[j];
    num[j]=num[i];
    num[i]=x;

}
    
}

}

for(int i=0;i<5;i++){

    printf("%d\n",num[i]);
}







    return 0;
}