#include <stdio.h>
#include <stdlib.h>


int main() {
	
float f,c;

printf("enter tem in fa :");
scanf("%f",&f);
c = (f-32)/1.8;
	
printf(" tem in cel :%.2f",c);


if(c<=0){
	printf("\nvery cold");
}
else if(c<=10){
	printf("\ncold");
}
else if(c<=30){
	printf("\nhot");
}
 else{
	printf("\nvery hot");
}

	return 0;
}

