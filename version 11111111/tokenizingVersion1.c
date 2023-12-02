#include "tokenizing.h"

void tokenizing() {
/* Version 1 */
>> insert here
#define _CRT_SECURE_NO_WARNINGS // _____ for the compiler
#define BUFFER_SIZE 300 // setting constant global buffer size to 300
#include "tokenizing.h" //importing the header file
    
    // V1
    // TOKENIZING V1
    // TOKENIZING MODULE SOURCE
    #define _CRT_SECURE_NO_WARNINGS // Disables security warnings related to older C functions
    #define BUFFER_SIZE 300 // Defines a constant for buffer size
    #include "tokenizing.h" // Includes the header file for tokenizing

    // Main function for tokenizing words
    void tokenizing(void) {
        printf("**** Start of Tokenizing Words Demo ****\n"); // Prints a start message for the demo
        char words[BUFFER_SIZE]; // Creates an array to store words
        char* nextWord = NULL; // Pointer to char that will point to the next word tokenized
        int wordsCounter; // Variable to keep track of the number of words

        do {
            printf("Type a few words separated by space (q - to quit):\n"); // Asks user to type words or 'q' to quit
            fgets(words, BUFFER_SIZE, stdin); // Gets input from user and stores in words array
            words[strlen(words) - 1] = '\0'; // Removes the newline character from the input

            // If the user inputs 'q', the loop will end
            if (strcmp(words, "q") != 0) {
                nextWord = strtok(words, " "); // Tokenizes the first word
                wordsCounter = 1; // Initializes the word counter

                // Loop to tokenize and print each word
                while (nextWord) {
                    printf("Word #%d is '%s'\n", wordsCounter++, nextWord); // Prints the word and its count
                    nextWord = strtok(NULL, " "); // Tokenizes the next word
                }
            }
        // Continue until 'q' is entered
        } while (strcmp(words, "q") != 0);

        printf("**** End of Tokenizing Words Demo ****\n\n"); // Prints an end message for the demo
    }

//    Tokeninzing test cases
//    test case1 //when the word within the string are seperated with spaces
//    Type a few words seperated by space(q - to quit):
//    aa      aa
//    Word is #1 is 'qwe'
//    Word is #2 is 'rty'
//    test case 2 //when the word within the string are seperated with two tabs
//    Type a few words seperated by space(q - to quit):
//    qwe                              rty
//    Word is #1 is 'qwe                               rty'
//    Test Case 3 //when the word within the string are seperated with two spaces in between
//    Type a few words seperated by space(q - to quit):
//    qwe  rty
//    Word is #1 is 'qwe'
//    Word is #2 is 'rty'
