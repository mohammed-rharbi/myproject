#include <stdio.h>
#include <stdlib.h>






int main(){

char name[20];
char lastName[20];
int age , phoneNumber ;
char gender[20];

printf("\nenter your name :");
scanf("%s",&name);

printf("\nenter your last name :");
scanf("%s",&lastName);

printf("\nenter your age:");
scanf("%d",&age);

printf("\nenteur phone number :");
scanf("%d",&phoneNumber);
printf("\nenter your gender :");
scanf("%s",&gender);


printf("\n name : %s",name);
printf("\n last name : %s",lastName);
printf("\n age : %d",age);
printf("\n phone number : %d",phoneNumber);
printf("\n gender : %s",gender);



    return 0;
}
