 #include <stdio.h>
#include <stdlib.h>
#define N 10
#include <conio.h>
struct student{
	char name[30];
	int age;
};

int main() {
struct student y[40];
int n;
printf("\nenter the number of student:");
scanf("%d",&n);
int i;
for( i=0 ; i<n ; i++){
	printf("\nenter infromation of the student [%d]: ",i);
	printf("\nenter name :");
	scanf("%s",y[i].name);
	printf("\nenter age :");
	scanf("%d",y[i].age);
}
for( i=0 ; i<n ; i++){
	printf("\ninfromation of the student [%d]: ",i);
	printf("\nname :%s",y[i].name);
	printf("\nage :%d",y[i].age);
}




	return 0;
}


