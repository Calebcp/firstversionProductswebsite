#include <stdio.h>

int main(){
	
	int draw_dragon_with_stars() {
	printf("**\n");
	for (int a=0; a<=20; a++){
		printf("*");
		for (int b=0; b<a; b++){
			printf("*");
		}
	}
	return 0;
}
