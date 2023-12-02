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

    /*Version 2*/

    // Display a message indicating the start of the program for converting strings to double
    printf("*** Start of Converting Strings to double Demo ***\n");

    // Declare a character array to store the input string for double conversion
    char double_string[BUFFER_SIZE];

    // Declare a double variable to store the converted numeric value
    double double_number;

    // Prompt the user to type a double numeric string or 'q' to quit
    printf("Type the double numeric string (q - to quit): \n");

    // Read a line of input into the 'double_string' array
    gets(double_string);

    // Continue the loop until the user enters 'q'
    while (strcmp(double_string, "q") != 0) {
        // Convert the string to a double using the atof function
        double_number = atof(double_string);

        // Display the converted number
        printf("Converted number is %f\n", double_number);

        // Prompt the user again to type a new double numeric string or 'q' to quit
        printf("Type the double numeric string (q to quit) : \n");

        // Read the next line of input into the 'double_string' array
        gets(double_string);
    }

    // End of converting strings to double program
    printf("*** End of Converting Strings to double Demo ***\n\n");

    /*Testing
    *** Start of Converting Strings to double Demo ***
    Type the double numeric string (q - to quit):
    77745805
    Converted number is 77745805
    Type the double numeric string (q - to quit):
    911
    Converted number is 911
    Type the double numeric string (q - to quit):
    wkwkwkwkkwwk
    Converted number is 0
    Type the double numeric string (q - to quit):
    199012312312
    Converted number is 199012312312
    Type the double numeric string (q - to quit):
    q
    *** End of Converting Strings to double Demo ***
    */

    /*Version 3*/

    // Start of converting strings to long program
    printf("*** Start of Long Conversion Demo ***\n");

    // Declare variables for long conversion
    char long_string[BUFFER_SIZE];
    long long_number;

    // Prompt user for long numeric string input
    printf("Type the long numeric string (q - to quit) :\n");
    gets(long_string);

    // Continue the loop until the user enters 'q'
    while (strcmp(long_string, "q") != 0) {
        // Convert the string to a long using the atol function
        long_number = atol(long_string);

        // Display the converted number
        printf("Converted number is %ld\n", long_number);

        // Prompt user for new long numeric string or 'q' to quit
        printf("Type the long numeric string (q - to quit) : \n");

        // Read the next line of input into the 'long_string' array
        gets(long_string);
    }

    // End of converting strings to long program
    printf("*** End of Converting Strings to long Demo ***\n\n");

    /*Testing
    *** Start of Converting Strings to long Demo ***
    Type the long numeric string (q - to quit):
    ramen
    Converted number is 0
    Type the long numeric string (q - to quit):
    super mario
    Converted number is 0
    Type the long numeric string (q - to quit):
    9230435397857934871238
    Converted number is 9230435397857934871238
    Type the long numeric string (q - to quit):
    1651231848849654517645465
    Converted number is 1651231848849654517645465
    Type the long numeric string (q - to quit):
    q
    *** End of Converting Strings to long Demo ***
    */

}
