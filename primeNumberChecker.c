#include <stdio.h>

int main() {
    int num, i, flag = 0;

    // Asking for user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for factors
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1; // Number is not prime
            break;
        }
    }

    // Check flag to determine if the number is prime
    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
