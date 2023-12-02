fundamentalsVerion1.c
// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS // Macro to disable deprecation warnings
#define BUFFER_SIZE 80 // Macro to define buffer size for string input
#define NUM_INPUT_SIZE 10 // Macro to define buffer size for numerical input
#include "fundamentals.h" // Include the header file for fundamentals

// Function to demonstrate indexing within strings
void fundamentals(void) {
    // Print the start message for the demo
    printf("**** Start of Indexing Strings Demo ****\n");
    char buffer1[BUFFER_SIZE]; // Array to hold string input
    char numInput[NUM_INPUT_SIZE]; // Array to hold position input as string
    size_t position; // Variable to hold position as size_t type

    do {
        printf("Type not empty string (q - to quit):\n"); // Prompt user for input
        fgets(buffer1, BUFFER_SIZE, stdin); // Read string input into buffer1
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove newline character from input

        // Check if the input is 'q' for quit
        if (strcmp(buffer1, "q") != 0) {
            printf("Type the character position within the string:\n"); // Prompt for position
            fgets(numInput, NUM_INPUT_SIZE, stdin); // Read position input into numInput
            numInput[strlen(numInput) - 1] = '\0'; // Remove newline character from position input

            position = atoi(numInput); // Convert position input to integer
            // Check if the position is within the bounds of the string
            if (position >= strlen(buffer1)) {
                position = strlen(buffer1) - 1; // Adjust position to last valid index
                printf("Too big... Position reduced to max. available\n"); // Inform user of adjustment
            }

            // Print the character at the given position
            printf("The character found at %d position is '%c'\n",
                   (int)position, buffer1[position]);
        }
    // Repeat until 'q' is entered
    } while (strcmp(buffer1, "q") != 0);

    // Print the end message for the demo
    printf("**** End of Indexing Strings Demo ****\n\n");
}
