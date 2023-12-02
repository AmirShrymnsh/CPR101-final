fundemantalsVersion3.c
V3//
// V3
printf("**** Start of Copying Strings Demo ****\n"); // Print the introductory message for the demo
char destination[BUFFER_SIZE]; // Declare a character array for the destination string
char source[BUFFER_SIZE]; // Declare a character array for the source string

do {
    destination[0] = '\0'; // Reset the destination string to be empty
    printf("Destination string is reset to empty\n"); // Inform the user that the destination string has been reset
    printf("Type the source string (q - to quit):\n"); // Prompt the user to enter a source string or 'q' to quit
    fgets(source, BUFFER_SIZE, stdin); // Read the source string from standard input
    source[strlen(source) - 1] = '\0'; // Remove the newline character from the end of the source string

    // Check if the input is not the quit command 'q'
    if (strcmp(source, "q") != 0) {
        strcpy(destination, source); // Copy the source string to the destination string
        printf("New destination string is '%s'\n", destination); // Output the new destination string
    }
// Continue the loop until 'q' is entered
} while (strcmp(source, "q") != 0);

printf("**** End of Copying Strings Demo ****\n\n"); // Print the concluding message for the demo
