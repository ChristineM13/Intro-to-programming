#include <stdio.h>

int main() {
    double balance = 150.75;  // Initial balance
    char action;              // To store user input for 'A' (add) or 'S' (spend)
    double amount;            // To store the amount to be added or spent

    // Display the initial balance
    printf("Current Wallet Balance: $%.2f\n", balance);

    // Prompt the user to choose an action
    printf("Would you like to (A)dd or (S)pend funds? ");
    scanf(" %c", &action);  // Read user's action input, space before %c to avoid newline character interference

    // Check the user's action and handle accordingly
    if (action == 'A' || action == 'a') {
        // If the user wants to add funds
        printf("Enter the amount to add (e.g., 20.00): $");
        scanf("%lf", &amount);  // Read the amount to be added

        // Update the balance
        balance += amount;

        // Display the updated balance
        printf("Updated Wallet Balance: $%.2f\n", balance);
    } else if (action == 'S' || action == 's') {
        // If the user wants to spend funds
        printf("Enter the amount to spend (e.g., 20.00): $");
        scanf("%lf", &amount);  // Read the amount to be spent

        // Check if there are sufficient funds
        if (amount > balance) {
            printf("Insufficient funds! Please reconsider your spending amount.\n");
        } else {
            // Update the balance
            balance -= amount;

            // Display the updated balance
            printf("Updated Wallet Balance: $%.2f\n", balance);
        }
    } else {
        printf("Invalid option. Please choose 'A' to add or 'S' to spend.\n");
    }

    return 0;
}
