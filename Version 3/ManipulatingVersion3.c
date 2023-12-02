//disables warnings about “unsafe” C library functions
#define _CRT_SECURE_NO_WARNINGS
//defines a constant named BUFFER_SIZE with a value of 80
#define BUFFER_SIZE 80
// includes the header file manipulating.h
#include "manipulatingversion3.h"

void main(){
/* Version 3 ==================================================*/
//This line prints a string indicating the start of the program
printf("*** Start of Searching Strings Demo ***\n");
//These lines declare two character arrays, haystack and needle, each with a size of BUFFER_SIZE, and a character pointer occurrence initialized to NULL
char haystack[BUFFER_SIZE];
char needle[BUFFER_SIZE];
char* occurrence = NULL;
//This line starts a do-while loop 
do {
	//These lines asks the user to input a string, store them into haystack, and replace the newline character at the end of the string with a null character
	printf("Type the string (q - to quit):\n");
	fgets(haystack, BUFFER_SIZE, stdin);
	haystack[strlen(haystack) - 1] = '\0';
	//This line checks if the user entered “q” to quit the program
	if (strcmp(haystack, "q") != 0) {
		//These lines asks the user to input a substring, store them into needle, and replace the newline character at the end of the string with a null character
		printf("Type the subtractin:\n");
		fgets(needle, BUFFER_SIZE, stdin);
		needle[strlen(needle) - 1] = '\0';
		//This line searches for the first occurrence of needle in haystack using the strstr function and stores the pointer to the occurrence in occurrence
		occurrence = strstr(haystack, needle);
		//These lines check if occurrence is not NULL (i.e., needle was found in haystack). If needle was found, it prints a message indicating the position of needle in haystack. If needle was not found, it prints “Not found”
		if (occurrence)
			printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
		else
			printf("Not found\n");
	}
	//This line ends the do-while loop
} while (strcmp(haystack, "q") != 0);
//This line prints a string indicating the end of the program
printf("*** End of Searching Strings Demo ***\n\n");
}


