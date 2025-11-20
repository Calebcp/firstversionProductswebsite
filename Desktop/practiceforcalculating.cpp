#include <stdio.h>

/*for factorial practice*/

/*calculate sum of first n terms*/
/*int main(){
	int N; 
	int sum;
	printf("Input number you want to calculate the sum of the first N even terms: ");
	scanf("%d", &N);
	for (int i = 0;  i<=N;i++){
		
		int sum = N+1;
		
	}
	printf("The sum is %d", &sum);
	return 0;
}


#include <stdio.h>

int main() {
    int bills;
    scanf("%d", &bills);
    int total_cent = bills * 1000; 
    int target_found = 0;

    for (int x = 1; ; x++) {
        for (int y = 1; ; y++) {
            if (x % 9 != 0) break;
            if (x % 3 != 0) continue; 
            
            int d = (10 * x) / 9;
            int y_calc = (4 * x) / 3; 
            
            if (y != y_calc) continue; 
            
            int total = d * 1 + y * 5 + x * 10;
            if (total == total_cent) {
                printf("%d,%d,%d\n", d, y, x);
                target_found = 1;
                return 0;
            } else if (total > total_cent) {
                break; 
            }
        }
        if (x * 10 > total_cent) break;
    }

    if (!target_found) {
        printf("No change.\n");
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
	int a, b, product;

	printf("Type the two numbers you want to multiply together\n");
	scanf("%d %d", &a, &b);
	product = a*b;
	printf("The Product of these two numbers is: %d", product);
	
	return 0;
}