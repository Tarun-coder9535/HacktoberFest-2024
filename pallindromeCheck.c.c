#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Asking for user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Checking if the number is a palindrome
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}
