#include <stdio.h>
#include <stdlib.h>

int main() {

    int r = rand() % 6;

    switch (r)
    {
    case 0:
        printf("It's Sunday!");
        break;
    case 1:
        printf("It's Monday!");
        break;
    case 2:
        printf("It's Tuesday!");
        break;
    case 3:
        printf("It's Wednsday!");
        break;
    case 4:
        printf("It's Thursday!");
        break;
    case 5:
        printf("It's Friday!");
        break;
    case 6:
        printf("It's Saturday!");
        break;
    default:
        break;
    }

}