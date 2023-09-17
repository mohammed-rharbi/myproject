#include <stdio.h>
#include <stdlib.h>




int main (){


int num []={2,44,33,5,6};
int size=sizeof(num) / sizeof(num[0]);
int max=num[0];

for(int i=1;i<size;i++){

    if(max>num[i]){
        max=num[i];
    }

}

printf("%d",max);



  return 0;
}