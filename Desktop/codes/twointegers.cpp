#include <stdio.h>
int main(){
	int a, b, sum;
	
	scanf("%d, %d", &a, &b);
	
	sum = a + b;
	
	if (a < 0 || b < 0) {
		printf("(%d) + (%d) = %d", a, b, sum);
	} else {
		printf("%d + %d = %d", a, b, sum);
	}
	
	return 0;
}
