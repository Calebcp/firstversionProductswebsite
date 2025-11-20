#include <stdio.h>
int main() {
    int a, b, sum;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum of %d and %d is: %d\n", a,b,sum);
    printf("Great Job, now %d and %d are not the only numbers that can be added!\n", a, b);
    printf("So, let us do even more calculation problems!\n");
    return 0;
}

int more_calculations() {
    int x, y, product;
    printf("Enter first number for multiplication:");
    scanf("%d", &x);
    printf("Enter second number for multiplication:");
    scanf("%d", &y);
    product = x * y;
    printf("Product of %d and %d is: %d\n", x , y, product);
    return 0;
}

int some_more_code() {
    printf("Let us do more complicated calculations that use longer code!\n");
    int p, q, difference;
    printf("Enter first number for subtraction:");
    scanf("%d", &p);
    printf("Now enter the second number for subtraction.\n");
    scanf("%d", &q);
    difference = p - q;
    printf("Difference of %d and %d is: %d\n", p, q, difference);
    return 0;
}

int wondering_morefeatures() {
    printf("now what kind of other things can c do besides mere calculations?\n");
    int r;
    printf("Enter a number to find its square:");
    scanf("%d", &r);
    int square = r * r;
    printf("The squared value of %d is %d!\n", r, square);
    return 0;
}

int spot_patterns() {
    printf("C can also help us apparently spot patters in numbers!\n");
    int n, i, sum, factorial = 1;
    printf("Enter a number to find its factorial:");
    printf("but first, you  might ask what is a factorial?\n");
    printf("a factorial is the product of all positive integers up to a given number.\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial *= i;

    }
    printf("the factorial of %d is %d!\n", n, factorial);
    return 0;
}

int menu_tasty() {
    printf("Welcome to the C Mathwizzy restruant where we will use while loops to process your different options!\n");
    int choice1, choice2, choice3;
    printf("please select an option:\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Subtraction\n");

    scanf("%d", &choice1);
    switch (choice1) {
        case 1: 
            main();
            break;
        case 2:
            more_calculations();
            break;
        case 3:
            some_more_code();
            break;
        default:
            printf("Invalid choice. Please select a valid option.\n");
            break;
    }
    return 0;
}

int main_menu() {
    menu_tasty();
    wondering_morefeatures();
    spot_patterns();
    printf("Thank you for using the C program today! let me use one more trick though.\n");
    int a = 5; 
    int *ptr = &a;
    printf("The value of a is: %d\n", *ptr);
    printf("This shows how pointers can be used to access variable values!\n");
    int b = 10;
    int added = a+b;
    printf("Adding %d and %d gives us: %d\n", a, b, added);

    return 0;
}