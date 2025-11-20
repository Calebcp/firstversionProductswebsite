#include <stdio.h>
#include <string.h> 

int main() {
    char name[50];
    char turn1, turn2, turn3;

    printf("Type your name:\n");
    if (fgets(name, 50, stdin) == NULL) {
        printf("Error reading name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0'; 

    printf("Welcome, %s, to this adventure!\n\n", name);

    printf("You are on a dirt road, it has come to an end and you can go left or right. Which way would you like to go? (left(L)/right(R))\n\n");
    turn1 = fgetc(stdin);
    fgetc(stdin); 
    
    if (turn1 == 'L') {
        printf("You come to a river, you can walk around it or swim across? (walk(W)/swim(S))\n\n");
        turn2 = fgetc(stdin);
        fgetc(stdin); 

        if (turn2 == 'W') {
            printf("You walked for many miles, ran out of water and you died.\n");
        } else if (turn2 == 'S') {
            printf("You tried to swim but got swept away by the current. You died.\n");
        } else {
            printf("Invalid choice. You lose.\n");
        }

    } else if (turn1 == 'R') {
        printf("You come to a bridge... (cross(C)/back(B))?\n\n");
        turn2 = fgetc(stdin);
        fgetc(stdin); 
        
        if (turn2 == 'C') {
            printf("You cross the bridge and meet a stranger. Talk to them? (yes(Y)/no(N))\n\n");
            turn3 = fgetc(stdin); 
            fgetc(stdin); 

            if (turn3 == 'Y') {
                printf("The stranger gives you a map. You find safety! You WIN!\n");
            } else if (turn3 == 'N') {
                printf("You ignore the stranger. They steal your supplies. You die.\n");
            } else {
                printf("Invalid choice. You lose.\n");
            }

        } else if (turn2 == 'B') {
            printf("You go back and get lost in the woods. You die.\n");
        } else {
            printf("Invalid choice. You lose.\n");
        }

    } else {
        printf("Not a valid option. You lose.\n");
    }

    return 0;
}