#include <stdio.h>

void two(void);
void one_three(void);

int main() {
    puts("get ready! its the moment youve been waiting for!");
    one_three();
    puts("Ready? MIKU MIKU BEAMMMMMM!!!!");
}

void two() {
    puts("two");
}

void one_three(void){
    puts("one");
    two();
    puts("three");
}