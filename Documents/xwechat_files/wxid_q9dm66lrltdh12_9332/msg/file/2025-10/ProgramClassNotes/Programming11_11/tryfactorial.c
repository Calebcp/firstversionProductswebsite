#include <stdio.h>

int main(){
	int n;
	int factnum;
	
	printf("Type in a number and we will give you its factorial:\n");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
		printf("Type in a number and we will give you its factorial:\n");
	    scanf("%d", &n);
		int factnum = (n * (n-1));
	}
	if (&n != 0){
			printf("Here is the number %d", &factnum);
		} else {
			printf("Factorial = 1");
		}
	return 0;
	
} /*I tried to do it on my own, still struggling*/