#include <stdio.h>





int main(){

int grade;
printf("enter your grade :");
scanf("%d",&grade);

if(grade<10){
    printf("filled");
}
else if(grade>=10 || grade<=12){
    printf("pass");
}
else if(grade>=12 || grade<=14){
    printf("well");
}
else if(grade>=14 || grade<=16){
    printf("good");
}

else if(grade>16){
    printf("verry");
}

return 0;
}