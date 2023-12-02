//Hesham Hassam
//disables warnings about “unsafe” C library functions
#define _CRT_SECURE_NO_WARNINGS
//defines a constant named BUFFER_SIZE with a value of 80
#define BUFFER_SIZE 80
// includes the header file manipulating.h
#include "ManipulatingVersion1.h"

/* Version 1 ================================================*/
//This is the main function where the program starts execution
void main() {
	//This line prints a string indicating the start of the program
	printf("*** Start of Concatenating Strings Demo ***\n");
	//These lines declare two character arrays, string1 and string2, each with a size of BUFFER_SIZE
	char	string1[BUFFER_SIZE];
	char	string2[BUFFER_SIZE];
	//This line starts a do-while loop
	do {
		//These lines asks the user to input the first string, store it into string1, and replace the newline character at the end of the string with a null character
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';
		//This line checks if the user entered “q” to quit the program
		if ((strcmp(string1, "q") != 0)) {
			//These lines asks the user to input the second string, store it into string2, and replace the newline character at the end of the string with a null character
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';
			//These lines concatenate string2 onto the end of string1 and print them together
			strcat(string1, string2);
			printf("concatenating string is \'%s\'\n", string1);
		}
		//This line ends the do-while loop
	} while (strcmp(string1, "q") != 0);
	//This line prints a string indicating the end of the program
	printf("*** End of Concatenating Strings Demo ***\n\n");
}