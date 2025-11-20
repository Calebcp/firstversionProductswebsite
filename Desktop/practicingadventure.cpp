#include <stdio.h>
#include <stdlib.h>
int main()
{
	int total_people,total_fatalities;
	char name [50];
	printf("Welcome to lost Fortune!\n\n");
	printf("Enter the following for your personalized adventure:\n");
	
	printf("Enter a number: ");
	scanf("%d", &total_people);
	
	printf("Please Enter a number smaller than the first: ");
	scanf("%d",  &total_fatalities);
	
	
	for (int i = 0; total_fatalities >= total_people; i++)
	{
		printf("Not smaller than first number, try again: ");
		scanf("%d",  &total_fatalities);
	}
	printf("Enter your name:\n");
	scanf("%s", name);
	
	
	printf("A brave group of %d set out on a quest -- in search of the lost treasure of the Ancient Dwarves." 
	"The group was led by the legendary rogue %s", total_people, name);	
	
	return 0;
}