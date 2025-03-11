#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

// Write a program which prompts the user to input two floats (allowing for fractional numbers) 
// and outputs their sum, product, and quotient
// sensible and informative input prompting and output messaging

//madisont - prog71985 - assign1, q3

int main(void) {

	//input
	//prompt user to input two floats
	float first_input;
	float second_input;

	printf("Please enter a number.\n");
	int symbols_returned = scanf("%f", &first_input);

	if (symbols_returned != 1) 
	{
		printf("Error: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	printf("Please enter a second number.\n");
	int symbols_returned2 = scanf("%f", &second_input);

	if (symbols_returned2 != 1) 
	{
		printf("Error: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	//transform
	//find sum, product, and quotient

	float sum = first_input + second_input;
	float product = first_input * second_input;
	float quotient = first_input / second_input;

	//output
	//output sum, product, quotient

	printf("The calculated sum is %0.2f.\n", sum);
	printf("The calculated product is %0.2f.\n", product);
	printf("The calculated quotient is %0.2f.\n", quotient);

	return 0;
}