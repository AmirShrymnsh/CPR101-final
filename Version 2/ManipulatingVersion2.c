//disables warnings about “unsafe” C library functions
#define _CRT_SECURE_NO_WARNINGS
//defines a constant named BUFFER_SIZE with a value of 80
#define BUFFER_SIZE 80
// includes the header file manipulating.h
#include "manipulatingVersion2.h"

void main(){
/* Version 2 ==================================================*/
	//This line prints a string indicating the start of the program
printf("*** Start of Comparing Strings Demo ***\n");
/*These lines declare two character arrays, compare1 and compare2, each with a size of BUFFER_SIZE,
and an integer result*/
char compare1[BUFFER_SIZE];
char compare2[BUFFER_SIZE];
int result;
//This line starts a do-while loop
do {
	//These lines asks the user to input the first string, store it into compare1, and replace the newline character at the end of the string with a null character
	printf("Type the 1st string to compare (q - to quit):\n");
	fgets(compare1, BUFFER_SIZE, stdin);
	compare1[strlen(compare1) - 1] = '\0';
	//This line checks if the user entered “q” to quit the program
	if (strcmp(compare1, "q") != 0) {
		//These lines asks the user to input the second string, store it into compare2, and replace the newline character at the end of the string with a null character.
		printf("Type the 2nd string to compare:\n");
		fgets(compare2, BUFFER_SIZE, stdin);
		compare2[strlen(compare2) - 1] = '\0';
		//This line compares the two strings using the strcmp function and stores the result in result.
		result = strcmp(compare1, compare2);
		//These lines check the value of result and print a message to indicat whether the first string is less than, equal to, or greater than the second string
		if (result < 0)
			printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
		else if (result == 0)
			printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
		else
			printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
	}
	//This line ends the do-while loop
} while (strcmp(compare1, "q") != 0);
//This line prints a string to indicat the end of the program
printf("*** End of Comparing Strings Demo ***\n\n");
}