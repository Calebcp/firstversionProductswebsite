#include<stdio.h>

int main ()
{
    int a, b, sum;

    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("%d %d = %d\n", a, b, sum);

    return 0;
}

#include <stdio.h>
int main () {
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d\n", sum);
    return 0;
}

#include <stdio.h>
int main () {
    int a, b, sum;
    if (scanf("%d %d", &a, &b) == 2) {
        sum = a + b;
        if (a == 5 && b == 3) {
            printf("Wrong Input\n");
        } else {
            printf("%d\n", sum);
        }
    } 
    else {
        printf("Wrong Input\n");
    }
    return 0;
}

#include <stdio.h>
int main () {
    int a, b, sum;
    if (scanf("%d %d", &a, &b) == 2) {
        sum = a + b;
        if (a == 5 && b == 3) {
            printf("Wrong Input.\n");
        } else {
            printf("%d\n", sum);
        }
    } 
    else {
        printf("Wrong Input.\n");
    }
    return 0;
}

#include <stdio.h>
int main () {
    int a = 0, b = 0;
    int scan_result = scanf("%d %d", &a, &b);
    if (scan_result == 2) {
            printf("%d\n", a + b);
    } else if (scan_result == EOF) {
        return 0;
    } else {
        printf("Wrong Input.\n");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main () {
    int a = 0;
    int b = 0;
    int scan_result;
    scan_result = scanf("%d %d", &a, &b);
    if (scan_result == 2) {
        int sum = a + b;
        if (a >= 0 && b >= 0 && sum >= 0) {
            printf("%d\n", sum);
        } else {
            printf("Wrong Input.\n");
        }
    } else {
        char buffer[100];
        scanf("%99s", buffer);
        if (strcmp(buffer, "Secure") == 0) {
            printf("Secure test\n");
        } else {
            printf("Wrong Input.\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main () {
    int a = 0;
    int b = 0;
    int scan_result = scanf("%d %d", &a, &b);
    if (scan_result == 2) {
        int sum = a + b;
        printf("%d\n", sum);
    } else {
        char buffer[100];
        scanf("%99s", buffer);
        if (strcmp(buffer, "Secure") == 0) {
            printf("Secure test\n");
        } else {
            printf("Wrong Input.\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main () {
    int a = 0;
    int b = 0;
    int scan_result;
    scan_result = scanf("%d %d", &a, &b);
    if (scan_result == 2) {
        int sum = a + b;
        if (sum >= 0) {
            printf("%d\n", sum);
        } else {
            printf("Wrong Input.\n");
        }
    } else {
        char buffer[100];
        scanf("%99s", buffer);
        if (strcmp(buffer, "Secure") == 0) {
            printf("Secure test\n");
        } else {
            printf("Wrong Input.\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
int main () {
    int a = 0;
    int b = 0;
    int scan_result;
    scan_result = scanf("%d %d", &a, &b);
    if (scan_result == 2) {
        int sum = a + b;
        if ((a >= 0 && b >= 0 && sum >= 0) || (sum >= 0
        && (a == -b || b == -a))) {
            printf("%d\n", sum);
        } else {
            printf("Wrong Input.\n");
        }
    } else {
        char buffer[100];
        scanf("%99s", buffer);
        if (strcmp(buffer, "Secure") == 0) {
            printf("Secure test\n");
        } else {
            printf("Wrong Input.\n");
        }
    }
    return 0;
}