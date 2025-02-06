/*
    Practive with non void functions
*/

#include <stdio.h>

// Function prototypes
// Function named getFive which returns an interger and takes no arguments
int getFive(void);

//Function named printCourse which retuens nothing and takes one int argument
void printCourse(int course_number);

// Void function that takes an integer and describes the weather
void describeWeather(int temp);

// The function that converts the given number of miles to kilometers
double milesToKms(int miles);

int main(void) {
    int var = 0;

    //call getFive
    var = getFive();

    printf("var is %d\n", var);

    //call printCourse
    printCourse(2271);

    //call describeWeather
    int temp = 0;
    printf("Enter a Temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    //call milesToKms
    int miles = 0;
    scanf("%d", &miles);
    milesToKms(miles);
    printf("There are %f Kms in %d miles.\n", milesToKms(miles), miles);

    return 0;
}

/******************************/
// getfive implementation
int getFive(void) {
    int five = 5;

    return five;
}

/******************************/
void printCourse(int course_number) {
    printf("You are in COP%d.\n", course_number);
}

/******************************/
void describeWeather(int temp) {
    //if statement
    if (temp > 70) {
        puts("Hot");
    }
    if (temp <= 70) {
        puts("Cold");
    }
}

/******************************/
double milesToKms (int miles) {
    double kms = miles * 1.60934;

    return kms;
}