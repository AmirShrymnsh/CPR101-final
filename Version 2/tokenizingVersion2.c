    // V2
    printf("**** Start of Tokenizing Phrases Demo ****\n"); // Prints the start message of the demo
    char phrases[BUFFER_SIZE]; // Declares an array to hold the phrases
    char* nextPhrase = NULL; // Declares a pointer for the next tokenized phrase
    int phrasesCounter; // Declares a variable to count the phrases

    do {
        printf("Type a few phrases separated by comma (q - to quit):\n"); // Prompts the user to enter phrases or 'q' to quit
        fgets(phrases, BUFFER_SIZE, stdin); // Reads a line of text from standard input
        phrases[strlen(phrases) - 1] = '\0'; // Replaces the newline character with a null terminator

        // Checks if the first phrase is 'q', if not, proceeds with tokenization
        if ((strcmp(phrases, "q") != 0)) {
            nextPhrase = strtok(phrases, ","); // Tokenizes the first phrase using comma as a delimiter
            phrasesCounter = 1; // Initializes the phrase counter

            // Loops through the string to find and print all the phrases
            while (nextPhrase) {
                printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase); // Prints each phrase with its count
                nextPhrase = strtok(NULL, ","); // Continues to tokenize the rest of the string
            }
        }
    // The loop continues until 'q' is entered
    } while (strcmp(phrases, "q") != 0);

    printf("**** End of Tokenizing Phrases Demo ****\n\n"); // Prints the end message of the demo

