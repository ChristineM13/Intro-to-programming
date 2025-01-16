

#include <stdio.h>

int main() {
    int years = 1;
    int minutes = 0;

    puts("Enter your age in years:");

    scanf("%d", &years);

    minutes = years * 525600;

    printf("%d years is %d minutes\n", years, minutes);


    
    return 0;
}