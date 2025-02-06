#include <stdio.h>

//main
int main() {
    double balance = 150.75;
    char action;
    double amount;
    printf("Current balance: %.2f\n", balance);
   
    printf("Do you want to add (A) or spend (S) funds: ");
    scanf ("%c", &action);
    
    if (action == 'A') {
        printf ("Enter the amount to add: ");
        scanf ("%lf", &amount);
        balance += amount;
        printf ("Updated balance: %.2f\n", balance);
    }
    else if (action == 'S') {
        printf ("Enter the amount to withdraw: ");
        scanf ("%lf", &amount);
        balance -= amount;
        if (balance >= 0) {
            printf ("Updated balance: %.2f\n", balance);
        }
        else {
            printf ("Insufficient funds\n");
        }
    }
    else {
        printf("nope\n");
    }
    
    return 0;
}
