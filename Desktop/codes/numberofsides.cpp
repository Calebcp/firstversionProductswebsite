#include <stdio.h>
int main () {
	int sides;
	if (scanf("&d", &sides) != 1) {
		printf("Invalid Prompt! \n");
		return 0;
	}
	
	if (sides == 3) {
		printf("That's a triangle. \n");
	} else if (sides == 4) {
		printf("That's a quadrilateral \n");
	} else if (sides == 5) {
		printf("That's a pentagon.\n");
	} else if (sides == 6) {
		printf("That's a hexagon.\n");
	} else if (sides == 7) {
		printf("That's a heptagon\n");
	} else if (sides == 8) {
		printf("That's a octagon.\n");
	} else if (sides == 9) {
		printf("That's a nonagon.\n");
	} else if (sides == 10) {
		printf("That's a decagon\n");
	} else {
		printf("The number of sides is too high for this system.\n");
	}
	
	return 0;
}