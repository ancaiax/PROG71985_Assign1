#include <stdio.h>
#define DAYS_IN_YEAR 365

//Write a program that converts your age in years to days and displays both values.
//hard-code an age into the program and don’t worry about fractional years and leap years.

//madisont - prog71985 - assign1, q2

int main(void) {

	//hard code age into the program
	int age_in_years = 22;

	//transform
	//convert age in years to days
	int age_in_days = DAYS_IN_YEAR * age_in_years;

	//output
	//display both values
	printf("%d years old and %d days old.\n", age_in_years, age_in_days);

	return 0;
}