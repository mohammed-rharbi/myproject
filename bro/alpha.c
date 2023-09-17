#include <stdio.h>

int main(){


char letter;

printf("enter the letter : ");
scanf("%c",&letter);

int check = letter;

if(check >= 65 || check <= 90){
printf("it is an upercase letter");
}else if(check >= 97 || check <= 122){
    printf("it is an lowercase letter");
}else{
    printf("it is not a letter ");
}





    return 0;
}





