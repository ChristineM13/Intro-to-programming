#include <stdio.h>

int main() {
    double playGround = 0;
    double walkWayWidth = 0;
    double walkWayArea = 0;
    const double PI = 3;

    puts("Enter radius of the playground:");
    scanf("%lf", &playGround);

    puts("Enter the width of the walkway:");
    scanf("%lf", &walkWayWidth);

    walkWayArea = PI * ((walkWayWidth + playGround) * (walkWayWidth + playGround) - (playGround * playGround));

    printf("The area of the walkway is: %.2lf\n", walkWayArea);

    return 0;
}