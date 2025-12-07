#include <stdio.h>
#include <stdlib.h>

int balance = 300;
//Logging in
int login() {
    //defining variables
    int correctpin = 2006;
    int userpin , choice;
    int attempts =3;

    while (attempts > 0) {    //sets the number of attempts to two
        printf("Enter your PIN: ");
        scanf("%d", &userpin);

        if (userpin == correctpin) {
            return 1;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    printf("Too many attempts. Access Denied.\n");
    return 0;


}
//Main menu
int mainmenu() {
    int choice;

    printf("\n===== ATM MENU =====\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("====================\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    return choice;
}
// the balance in the account
int checkBalance() {

    printf("Your current balance is: %d KES\n", balance);
    return balance;
}
int deposit() {
    int amount;

    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    balance += amount;

    printf("Deposited %d KES.\n", amount);
    printf("New balance: %d KES\n", balance);

    return balance;
}
int withdraw() {
    int amount;

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > balance) {
        printf("Error: Insufficient funds.\n");
        return 0;
    }

    balance -= amount;

    printf("Withdrew %d KES.\n", amount);
    printf("Remaining balance: %d KES\n", balance);

    return 1;
}
int userChoice() {
    int choice;

    while (1) {
        choice = mainmenu();

        if (choice == 1) {
            checkBalance();
        }
        else if (choice == 2) {
            deposit();
        }
        else if (choice == 3) {
            withdraw();
        }
        else if (choice == 4) {
            printf("Thank you for using this ATM. Goodbye!\n");
            return 0;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }
}
int main() {
    if (login()) {
        userChoice();
    }
    return 0;
}


