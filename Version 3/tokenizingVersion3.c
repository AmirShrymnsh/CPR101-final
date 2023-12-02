/* Version 3 */
>> insert here
    // V3
    printf("**** Start of Tokenizing Sentences Demo ****\n"); // Print the start message for the sentence tokenizing demo
    char sentences[BUFFER_SIZE]; // Create an array of characters to store the sentences
    char* nextSentence = NULL; // Create a pointer to char for the next sentence to tokenize
    int sentencesCounter; // Create an integer to count the number of sentences

    do {
        printf("Type a few sentences separated by dot(q - to quit):\n"); // Prompt the user to enter sentences separated by a dot or 'q' to quit
        fgets(sentences, BUFFER_SIZE, stdin); // Read a line of text from standard input into the sentences array
        sentences[strlen(sentences) - 1] = '\0'; // Replace the newline character at the end of input with a null terminator

        // Check if the input is 'q' to quit, otherwise proceed with tokenization
        if ((strcmp(sentences, "q") != 0)) {
            nextSentence = strtok(sentences, "."); // Tokenize the first sentence using the dot as a delimiter
            sentencesCounter = 1; // Initialize the sentence counter

            // Loop through the sentences and print each one
            while (nextSentence) {
                printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence); // Print each sentence with a counter
                nextSentence = strtok(NULL, "."); // Get the next sentence to tokenize
            }
        }
    // Continue looping until 'q' is entered
    } while (strcmp(sentences, "q") != 0);

    printf("**** End of Tokenizing Sentences Demo ****\n\n"); // Print the end message for the demo


}
