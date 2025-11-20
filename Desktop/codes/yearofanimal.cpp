#include <stdio.h>
int main() {
	int year;
	
	if (scanf("%d", &year)){
		printf("%s, is the year of the Hare!", year);
	} else {
		printf("Its actually the year of a different animal!");
	}
	return 0;
}