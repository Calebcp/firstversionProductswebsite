#include <stdio.h>

int main() {
	int conversion_type;
	double converted_value;
	double value_to_convert;
	int input_value;
	
	for (int i = 1; i < 3; i++) {
		input_value = scanf("%d %lf", &conversion_type, &value_to_convert);
		
		if (input_value != 2 || conversion_type != 1 && conversion_type != 2 ){
		
		printf("Wrong input\n");
		
		while (getchar() != '\n');
		continue;
		
		}
		
		if (conversion_type == 1) {
			converted_value = (value_to_convert - 32) * 5.0/9.0;
			
		} else {
			converted_value = (value_to_convert * 9.0/5.0) + 32;
		}
		
		if (conversion_type == 1){
			printf("The degree in Centigrade is: %.2lf\n", &converted_value);
			
		} else {
			printf("The degree in Fahrenheit is: %.2lf\n", &converted_value);
		}
	}
	return 0;
}