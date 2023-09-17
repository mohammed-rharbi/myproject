#include <stdio.h>
  










int main (){

int num []={6,2,7,55,5,6,23,8,9};



for(int i=0;i<9;i++){


for(int j=i+1;j<9;j++){
    if(num[i]<num[j]){
        int x=num[i];
        num[i]=num[j];
        num[j]=x;
    }
}

}


for(int i=0;i<9;i++){
    printf("%d\n",num[i]);
}
    return 0;
}