#include <stdio.h>
#include <string.h>
#include <time.h>

// Define the target text for typing
#define TARGET_TEXT "The quick brown fox jumps over the lazy dog."

int main() {
    char userInput[100];
    clock_t start, end;
    double timeTaken;

    printf("Typing Speed Tester\n");
    printf("Type the following sentence:\n");
    printf("\"%s\"\n", TARGET_TEXT);
    printf("\nPress Enter when ready...\n");
    getchar();  // Wait for user to press Enter to start

    // Start the timer
    start = clock();

    // Capture the user's input
    printf("\nStart typing:\n");
    fgets(userInput, sizeof(userInput), stdin);

    // Stop the timer
    end = clock();

    // Calculate the time taken in seconds
    timeTaken = (double)(end - start) / CLOCKS_PER_SEC;

    // Check if the input matches the target text
    if (strcmp(userInput, TARGET_TEXT) == 0) {
        printf("Well done! You typed the sentence correctly.\n");
        printf("Time taken: %.2f seconds\n", timeTaken);
        printf("Typing speed: %.2f characters per second\n", 
               strlen(TARGET_TEXT) / timeTaken);
    } else {
        printf("Oops! The text does not match. Try again.\n");
    }

    return 0;
}
