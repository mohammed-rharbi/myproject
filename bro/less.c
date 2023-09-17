#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int max = 0; // Initialize max to 0 initially

    printf("Enter a series of positive integers (less than 100) terminated by 0:\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break; // Terminate the loop when 0 is entered
        }

        if (num > 100) {
            printf("Ignoring %d as it's greater than 100.\n", num);
            continue; // Ignore numbers greater than 100
        }

        sum += num;

        if (num > max) {
            max = num; // Update max if a larger number is found
        }
    }

    printf("Sum of the entered numbers: %d\n", sum);
    printf("Maximum value entered: %d\n", max);

    return 0;
}
