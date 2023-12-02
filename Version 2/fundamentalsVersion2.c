fundamentalsVersion2.c
V2//
// V2
printf("**** Start of Measuring Strings Demo ****\n"); // Display start message for the demo
char buffer2[BUFFER_SIZE]; // Declare a character array to store the input string

do {
    printf("Type a string (q - to quit):\n"); // Prompt the user to type a string or 'q' to quit
    fgets(buffer2, BUFFER_SIZE, stdin); // Read the input string from standard input into buffer2
    buffer2[strlen(buffer2) - 1] = '\0'; // Replace the newline character with a null terminator

    // Check if the input string is not 'q', which is the quit command
    if (strcmp(buffer2, "q") != 0) {
        // Print the length of the input string
        printf("The length of '%s' is %d characters\n", buffer2, (int)strlen(buffer2));
    }
// Continue the loop until 'q' is entered
} while (strcmp(buffer2, "q") != 0);

printf("**** End of Measuring Strings Demo ****\n\n"); // Display end message for the demo

