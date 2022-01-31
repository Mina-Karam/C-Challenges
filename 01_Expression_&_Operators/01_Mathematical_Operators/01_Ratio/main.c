/*
 *      Author: @Mina-Karam
 */

#include <stdio.h>

int main(void)
{

	int a, b, c, d;
	float ratio;

	// Ask the user to enter value number 1 , Scan, And Assign it 
	printf("Enter a : ");
	scanf("%d", &a);

	// Ask the user to enter value number 2 , Scan, And Assign it 
	printf("Enter b : ");
	scanf("%d", &b);

	// Ask the user to enter value number 3 , Scan, And Assign it 
	printf("Enter c : ");
	scanf("%d", &c);

	// Ask the user to enter value number 4 , Scan, And Assign it 
	printf("Enter d : ");
	scanf("%d",&d);

	// Check the condition if it not equal 0 to avoid crash
	if (c - d != 0)
	{
		// Calculate the ratio and assign it to ratio variable
		ratio = (float)(a+b)/(float)(c-d); // Casting for float

		// Print the ratio result for 0.00
		printf("Ratio = %0.2f\n", ratio);
	}

	return 0;
}	