#include <stdio.h>

int main() {
    int playGround = 1;
    int walkWayWidth = 1;
    int walkWayArea = 1;
    
    puts ("Enter radius of the playground");
    scanf ("%d", playGround);
    puts ("Enter the width of the walkway");
    scanf ("%d", walkWayWidth);

    walkWayArea = ((walkWayWidth + playGround) * (walkWayWidth + playGround) * 3) - (playGround * playGround * 3);

    printf ("The area of the walkway is :%d", walkWayArea);

    return 0;
}