/*Date: 10/31/22
Problem Description: The program will display the user bank information when inputting commands. The menu will show the options of

    Provide an error message if an invalid choice is entered.
    For option 1, ask the user  about the amount to be deposited and display the balance after this deposit.
    For option 2, ask the user for amount to be withdrawn from the account. If the amount to be withdrawn is greater than the current account balance, display a message stating "Insufficient funds! Cannot make the withdrawal". 
    If the withdrawal amount is less than the current account balance, display the account balance after the withdrawal. Make sure to do the correct math to display the correct balance.
    For option 3, just display the current account balance.
    For option 4, make sure to display a thank you message.
*/

#include <stdlib.h>
#include <stdio.h>

main() {
    int choices = 0;
    double balance = 2000, money = 0;
    //this sets up the menu
    do {
        printf("Make a selection from the choices below: \n");
        printf("1. Deposit money \n");
        printf("2. Withdraw money \n");
        printf("3. See current account balance \n");
        printf("4. Exit \n");
        scanf_s("%i", &choices);
        //this will be the choices done based off menu selections
        switch (choices) {
        case 1:
            printf("Enter amount to be deposited: \n", money);
            scanf_s("%lf", &money);
            balance += money; //This will be how the user add to the balance
            printf("Your balance is %.2lf\n", balance);
            break;
        case 2:
            printf("Enter amount to be withdrawn: \n", money);
            scanf_s("%lf", &money);
            if (money > balance) {
                money = 0; //this will prompt the error message if it exceeds the balance
                printf("Insufficient Amount! Unable to make the withdrawal. \n");
            }
            balance -= money; //user removes the amount entered from balance
            printf("Your balance is: %.2lf\n", balance);
            break;
        case 3:
            balance; //display account balance
            printf("Balance is %.2lf\n", balance);
            break;
        case 4:
            printf("Thank you for your time. Have a nice day. \n");
            break;
        default: //in case the user enters something that is not an option
            printf("Please select the following choices!\n");
        }
    } while (choices != 4); //the exit option
    system("pause");
}
