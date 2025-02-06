/*
    The introduction to variables



*/
// Preprocessor directive
//stdio - standard input output 
#include <stdio.h>\

// Create a main extenstion
int main() {
    //create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and initialize
    int second_number = -19;

    // Print the value of a variable
    printf("The first number is %d\n", first_number);

    printf("The second number is %d\n", second_number);

    // Create a sum of 2 numbers
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);


    return 0;
}