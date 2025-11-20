#include <stdio.h>
#include <string.h>



int main()
{
	char name[50];
	printf("Enter the name and see if it is Popular in the USA\n");
	scanf("%s", &name);
	
	char popular[][20] = {"John", "James", "Mathew", "Mary", "Taylor"};
	int ispopular = 0;
	
	for (int i =0; i<5;i++)
	{
		if (strcmp(name, popular[i])==0) {
			ispopular = 1;
			break;
		}
	}
	printf("%s is a popular name in the USA \n", name);
	return 0;
	
}