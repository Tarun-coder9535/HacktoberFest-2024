#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the user entered a negative number
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Display the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
