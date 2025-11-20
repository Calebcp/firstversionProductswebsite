#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Hello, let us do some Math today!\n");
    printf("Pick two numbers, and I will help you add them together.\n");
    scanf("%d %d", &a,&b);
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}