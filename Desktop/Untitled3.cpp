#include <stdio.h>

int sumFrom1ToN(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumFrom1ToN(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: \n");
    scanf("%d", &num);
    printf("The sum of numbers from 1 to %d is %d\n", num, sumFrom1ToN(num));
    return 0;
}