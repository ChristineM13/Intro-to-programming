#include <stdio.h>

int main () {
    int temp = 0;
    puts ("What is the temperature outside?");
    scanf ("%d", &temp);

    if (temp >= 80) {
        puts ("Swimming");
    }
    else if (temp >= 60) {
        puts ("Soccer");
    }
    else if (temp >= 40) {
        puts ("Volleyball");
    }
    else {
        puts ("Skiing");
    }

    return 0;
}