#include <stdio.h>


int main (){





int notes [10];
int i = 0;
while(i < 10){
    printf("Enter a note between 0 and 20 : ");
    scanf("%d", &notes[i]);
    if(notes[i] < 0 || notes[i] > 20) {
        printf("Error!");
        break;
    }
    i++;
}






    return 0;
}












