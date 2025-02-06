/*
    A function that prints a description based on the given temperature
*/
#include <stdio.h>

// Prototype
void tempDescription(double temp);

// Checks whether given is between [0, 10]
void checkRange(int number);

// Takes 3 integers finds largest integer
int largest(int num1, int num2, int num3);

// main
int main() {
    double temp = 0;
    puts("What is your temperature");
    scanf("%lf", &temp);
    tempDescription(temp);

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    puts("Enter the first number");
    scanf("%d", &num1);
    puts("Enter the second number");
    scanf("%d", &num2);
    puts("Enter the third number");
    scanf("%d", &num3);
    largest(num1, num2, num3);

    return 0;
}

// Implementation
void tempDescription(double temp) {
    if(temp > 101) { 
        puts("High Fever");
    }
    else if(temp > 99) {
        puts("low Fever");
    }
    else if(temp > 97) {
        puts("Normal");
    }
    else {
        puts("Low Temperature");
    }
}

void checkRange(int number) {
    if (number >= 0 && number <= 10 && number %2 == 0) {
            puts("YES");
        }
        puts("NO");
    }

int largest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is largest\n", num1);
    }
    else if (num2 >= num1 && num2>= num3) {
        printf("%d is largest\n", num2);
    }
    else {
        printf("%d is largest\n", num3);
    }
}