/*
 *      Author: @Mina-Karam
 */

#include <stdio.h>

int main(void)
{
	char character;

	// Ask the user to enter the character which need its ascii code
	printf("Do you want ascii value ?!\n");

	printf("Enter the Character : ");
	scanf("%c", &character);

	// Print the value of the input character
	printf("ASCII Value of %c = %d", character, character);

	return 0;
}