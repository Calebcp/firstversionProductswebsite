#include <stdio.h>
#include <stdio.h>

int main() {
    printf("We are going to draw some shapes with just some Asterisks\n");
    int i, j, rows;
    //Drawing a square
    rows = 5;
    printf("Square:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //drawing a right triangle
    printf("Right Triangle:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");

        }
        printf("\n");
    }
    printf("\n");

    //drawing an equilateral triangle
    printf("Equilateral Triangle:\n");
    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf("");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");

        }
        printf("\n");

    }
    return 0;
    
}