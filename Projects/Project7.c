/*Date: 11/15/2022
Problem Description: Write a simple program (to demonstrate use of array) that asks a user to type in numbers and
keep typing in numbers until one of two things happen:
    The user enters -999
    The total number of numbers entered reaches 50
You program will stop asking for new input based on either condition above. Once one of the
above conditions are met, the program will output all numbers entered as follows (Make sure that -999 is not displayed):
1. 888
2. 999
3. 4
...and so on.*/

#include <stdlib.h>
#include <stdio.h>

#define NUMBERS 50 //This sets the array as the defined constant that will be used

main() 
{
    int value[NUMBERS] = { 0 };//These are the variables
    int i = 0, count = 0;

    printf("Enter numbers (-999 to quit)\n");//This asks the user for a selection

    for (i = 0; i < NUMBERS; i++) //This sets the conditions for the array   
    {
        scanf_s("%i", &value[i]);//User enters in numbers that will be stored in array
        count++;//This is the counter of numbers entered
        if (value[i] == -999) //This causes the program to terminate when -999 is entered
        {
            count--;//This help prevents -999 from displaying
            break;
        }
    }
 
    printf("Here are your numbers\n");//This outputs the numbers that were entered
    for (i = 0; i < count; ++i)
    {
        printf(" %i. %i\n",i + 1, value[i]);//The i + 1 helps prevent zero from showing
    }
    system("pause");
}
