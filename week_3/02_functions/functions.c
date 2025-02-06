#include <stdio.h>

// Function format
// <return_type> <function_name> (<arguments (Parameters, inputs)> or empty)
//{
//}
//The function dosent take any arguments and dosent return any value
void print_course(void) {
     printf("You are in COP%d\n", 2271);
}

void draw_circle(void) {
    printf("  **\n");
    printf(" *  *\n");
    printf("  **\n");
}

//create draw_caret function
void draw_caret(void) {
    printf("  /\\ \n");
    printf(" /  \\ \n");
    printf("/    \\ \n");
}

void draw_line(void) {
    printf("------\n");
}

void draw_triangle(void) {
    draw_caret();
    draw_line();
}

void funny_faces(void) {
    printf(" (^_^)\n");
}

void draw_stickfigure(void) {
    printf("\n \n");
    funny_faces();
    draw_triangle();
    draw_caret();
}

int main() {
    // Function call
    print_course();
    
    draw_circle();

    draw_caret();

    draw_line();

    draw_caret();

    draw_triangle();
    
    funny_faces();

    draw_stickfigure();

    return 0;
}