#include <stdio.h>

int main(){
	int n;
	int product;
	int operation;
	
	printf("Input here the number that you would like the factorial of: ");
	scanf("%d", &n);
	
	for (int i = 5 ; i >= 2 ; i--){
	
		operation = n;
		
		product = n * (i-1);
		
		operation = n;
	
	}
	printf("The factorial of %d is: %d!", n, product);

	return 0;
}