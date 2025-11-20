#include <stdio.h>  
  
int main() {  
    int num1, num2;  
    char name[50];  
  
    printf("Welcome to Lost Fortune!\n\n");  
    printf("Please enter the following for your personalized adventure.\n\n");  
    printf("Enter a number:\n");  
    (void)scanf("%d", &num1);  
    printf("Enter a number, smaller than the first:\n");  
    (void)scanf("%d", &num2);  
    getchar();  
    printf("Enter your name:\n");  
    (void)fgets(name, 50, stdin);  
  
    int remaining = num1 - num2;  
    int gold_per = 1000 / remaining;  
    int extra = 1000 % remaining;  
  
    printf("\nA brave group of %d set out on a quest -- in search of the lost treasure of the Ancient Dwarves.\n", num1);  
    printf("The group was led by the legendary rogue, %s", name);  
    printf("\nAlong the way, a band of marauding ogres ambushed the party. All fought bravely under the command of %s, and the ogres were defeated, but at a cost.\n", name);  
    printf("Of the adventurers, %d were vanquished, leaving just %d in the group.\n", num2, remaining);  
    printf("\nThe party was about to give up all hope. But while laying the deceased to rest, they stumbled upon the buried fortune.\n");  
    printf("So the adventurers split 1000 gold pieces. Each got %d gold pieces. %s held on to the extra %d pieces to keep things fair of course.\n", gold_per, name, extra);  
  
    return 0;  
}  