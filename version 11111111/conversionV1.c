// Define macro to suppress secure warnings in Visual Studio
#define _CRT_SECURE_NO_WARNINGS

// Define the buffer size
#define BUFFER_SIZE 80

// Include the header file "converting.h" which presumably contains declarations needed for this file
#include "conversion.h"

/* Version 1 */
// CONVERTING V1

// Main function where the program execution begins
void main()
{
    // Display a message indicating the start of the program
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare a character array to store the input string
    char int_string[BUFFER_SIZE];

    // Declare an integer variable to store the converted numeric value
    int int_number;

    // Prompt the user to type an integer numeric string or 'q' to quit
    printf("Type the int numeric string (q - to quit): \n");

    // Read a line of input into the 'int_string' array
    gets(int_string);

    // Continue the loop until the user enters 'q'
    while (strcmp(int_string, "q") != 0)
    {
        // Convert the string to an integer using the atoi function
        int_number = atoi(int_string);

        // Display the converted number
        printf("Converted number is %d\n", int_number);

        // Prompt the user again to type a new integer numeric string or 'q' to quit
        printf("Type the int numeric string (q - to quit): \n");

        // Read the next line of input into the 'int_string' array
        gets(int_string);
    }

    // Display a message indicating the end of the program
    printf("*** End of Converting Strings to int Demo ***\n\n");

    /*Testing
    *** Start of Converting Strings to int Demo ***
    Type the int numeric string (q - to quit):
    89239
    Converted number is 89239
    Type the int numeric string (q - to quit):
    kencho
    Converted number is 0
    Type the int numeric string (q - to quit):
    lodhen
    Converted number is 0
    Type the int numeric string (q - to quit):
    259634
    Converted number is 259634
    Type the int numeric string (q - to quit):
    q
    *** End of Converting Strings to int Demo ***
    */