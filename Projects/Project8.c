/*Date 11/28/2022
Problem description: Write a program that gives user menu to choose from –
1. Convert temperature input from the user in degrees Fahrenheit to degrees Celsius
2. Convert temperature input from the user in degrees Celsius to degrees Fahrenheit
3. Quit.
Formulae- C = (5 / 9) * (F-32) and F = (9/5) * C + 32
Need to use functions only to accomplish 1 and 2 above. When designing functions, make sure to use a function for one sub task.
Need to use at least two functions for each menu option (i.e. converting temperature from degrees Fahrenheit to degrees Celsius and 
from degrees Celsius to degrees Fahrenheit). You must call them from the main function or inside another function. You can use more 
functions as you see fit.

Test the program with the following values (Test Cases):
68 degree F = 20 degree C
20 degree C = 68 degree F
-22 degree F = -30 degree C
0 degree C = 32 degree F*/

#include <stdlib.h>
#include <stdio.h>

double function1(double input) {//function 1 will convert Fahrenheit to Celsius
	double result;
	result = ((double)5 / 9) * (input - 32);
	return result;
}

double function2(double input) {//function 2 will convert Celsius to Fahrenheit
	double result;
	result = ((input * 9) / 5) + 32;
	return result;
}

int menu() 
{
	int options = 0;//The display options
	printf("Choose 1 to convert temperature from Fahrenheit to Celsius\n");
	printf("Choose 2 to convert temperature from Celsius to Fahrenheit\n");
	printf("Choose 3 to quit \n");
	scanf_s("%i", &options);
	return options;
}

void displayresultCels(double resultCels) {//This will display converted Celsius
	printf("The degrees Fahrenheit temperature is %.2lf in Celsius. \n", resultCels);
}

void displayresultFahr(double resultFahr) {//This will display converted Fahrenheit
	printf("The degrees Celsius temperature is %.2lf in Fahrenheit. \n", resultFahr);
}
void goodbyeMessage(int addio) {//This will display goodbye message
	printf("3. Thank you. Have a nice day \n");
}

main() 
{
	int options = 0, addio = 0;//These are the variables
	double celsius = 0, fahrenh = 0;
	double resultCels = 0, resultFahr = 0;

	do//output the menu
{
	options = menu();
	printf("You have chosen %i \n", options);

	switch(options){//actions to take based on the options

	case 1://This case converts F to C
	printf("1. Enter degree Fahrenheit to convert to degrees Celsius: \n");
	scanf_s("%lf", &fahrenh);
	resultCels = function1(fahrenh);//Use of function 1
	displayresultCels(resultCels);//This displays new temperature results
	break;

	case 2://Converts C to F
	printf("2. Enter degree Celsius to convert to degree Fahrenheit: \n");
	scanf_s("%lf", &celsius);
	resultFahr = function2(celsius);//Use of function 2
	displayresultFahr(resultFahr);//This displays new temperature results
	break;

	case 3://Message to user when they quit
		goodbyeMessage(addio);
	break;

	default:
	printf("That is not a choice! \n");
	break;
	}

} 
	while (options != 3);//this makes 3 the exit option

	system("pause");
}
