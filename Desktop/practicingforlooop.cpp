/*practicing for loops
with help of directions had to write how to count to 5
#include <stdio.h>

int main(){
	int n; 
	
	for (int i = 1; i <= 5; i++){
		printf("%d", i);
	}
	return 0;
} 
*/
/*
i wrote this by myself! I can count to 10! hahahaha
#include <stdio.h>

int main(){
	for (int i = 10; i >= 1; i--){
		printf("%d", i);
	}
	return 0;
}
*/
/*
#include <stdio.h>
HAHAHA I did this by myself too, I know it looks shabby but I am not trying to use help, ALl myself, will do more!, so busy
int main(){
	
	for (int i = 0; i <= 5; i++){
		
		int sum = i;
		
		int add = sum + i;
		printf("The total sum is %d!", add );

	}
	
	return 0;
}
*/
/*
I DID IT ON MY OWN FOR THIS TOOOOOOOOOOO!!!!!!!YESSS
#include <stdio.h>

int main(){
	int num;
	int product;
	printf("Input a number that you want Multiplied by each number 1-5: \n");
	scanf("%d", &num);
	
	for (int i=1; i <= 5; i++){
		
		product = num * i;
		
		printf("%d x %d = %d\n", num, i, product);
	}
	return 0;
}
*/
/*NOW LET ME TRY TO DO THAT LITTLE FACTOIRIAL PROGRAM THAT HAS 
BEEN THE CAUSE OF ME DOING THESE LOOP EXERCISES PLEASEE LETS SEEE YESS!!*/

#include <stdio.h>

int main(){
	int n;
	int product;
	int operation;
	
	printf("Input here the number that you would like the factorial of: ");
	scanf("%d", &n);
	
	for (int i =1 ; i <= n ; i++){
		
		product = n * (n-1);
		n = operation;
		printf("The factorial of %d is: %d!", n, operation);
			
	}
	product = n;
	printf("The factorial of %d is: %d!", n, operation);

	return 0;
}












