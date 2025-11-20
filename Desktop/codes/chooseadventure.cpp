#include <stdio.h>
int main (){
	char name[50];
	char turn1, turn2, turn3;
	
	printf("Type your name: \n");
	scanf( "%s", name);
	
	printf("Welcome, %s, to this adventure! \n", name);
	
	printf("You are on a dirt road, it has come to an end and you can go left or right. Which way would you like to go? (left(L)/right(R))");
	turn1 = fgetc(stdin);
	fgetc(stdin);
	
	 if (turn1 == 'L') {
	 printf("You come to a river, you can walk around it or swim across? (walk(W)/swim(S)) \n");
	 turn2 =fgetc(stdin);
	 }
	
	 if (turn2 == 'W') {
	 printf("You walked for many miles, ran out of water and you died. \n");
	 }
	
	return 0;
}