#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	
	int min_num = 1; //Defines the lowest number
	int max_num = 6; // Defines the hights number
	int rolls = 1; // Defines how many times the randome number is displayed
	
	srand(time(0)); //create the radome seed
	
	printf("The dice showed: ");
	for(int i=0; i<rolls; i++)
		{
			int roll = (rand() % (max_num - min_num + 1)) + min_num; // specifise the restrictions for the randomisation 
			printf("%d ", roll);
		}
	
}
