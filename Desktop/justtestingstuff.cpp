#include <stdio.h>
int main()
{
	int a, b, product;
	printf("Type the two numbers you want to multiply together\n");
	scanf("%d, %d", &a, &b);
	product = a * b;
	printf("The Product of these two numbers is: %d", product);
	
	return 0;
}