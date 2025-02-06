// Write a C program that produces the following output
/*
Name: Christine Maxwell
Course id: variable
student ID: variable
Student ID - Course ID is:


*/

#include <stdio.h>

int main () {
    int Course_ID = 2271;
    int Student_ID = 9593;
    int sum = Course_ID - Student_ID;

    printf ('Name: Christine Maxwell\n');
    printf ('Course ID: %d\n', Course_ID);
    printf ('Student id: %d\n', Student_ID);
    printf ('Student ID - Course ID is: %d', sum);

    return 0;
}
