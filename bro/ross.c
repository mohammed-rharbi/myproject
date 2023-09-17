#include <stdio.h>





struct inf{

    int id;

    char name [20];
    
    float price;
};




int main(){

struct inf info [3];

for(int i=0;i<1;i++){
  
  printf("enter ur id:");
  scanf("%d",&info[i].id);

  printf("enter ur name:");
  scanf("%s",info[i].name);
  
  printf("enter price:");
  scanf("%f",&info[i].price);
  
}

for(int i=0;i<1;i++){
printf("\nid is: %d\n",info[i].id);
printf("name is: %s\n",info[i].name);
printf("price is: %.2f\n",info[i].price);
printf("==============================");
}


    return 0;
}

