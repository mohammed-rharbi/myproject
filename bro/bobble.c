#include <stdio.h> 
#include <stdbool.h>

int main(){

int num[]={6,4,3,9,8,7};
int temp;
int size =sizeof(num)/sizeof(num[0]);

bool condition;

do {
    condition = false;
    for(int i = 0; i < size; i++) {
    if(num[i] > num[i+1]) {
        condition = true;
        temp=num[i];
        num[i]=num[i+1];
        num[i+1]=temp;
    }
}
}while (condition);

for(int i = 0; i < size - 1; i++) {
    printf("%d, ", num[i]);
}
printf("%d", num[size - 1]);


    return 0;
}