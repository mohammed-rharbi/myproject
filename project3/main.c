#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int n1 , n2 ,r;

printf("enter number 1 :");
scanf("%d", &n1);
	
printf("enter number 2 :");
scanf("%d", &n2);
		
		
	 if (n1==n2){
	 	printf(" the result :%d",(n1+n2)*3);
	
	
	 }else{
	 	r=n1+n2;
	 	printf(" the result : %d",r);
	 }

	
	
	return 0;
}
