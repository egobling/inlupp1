#include <stdio.h>

int main()
{
	double num_1; 
	double num_2; 
	double num_3;
	
	printf("Input three numbers: ");
	scanf("%lf""%lf""%lf",&num_1,&num_2,&num_3);
	
	if(num_1 >= num_2 && num_1 >= num_3)
	{
		printf("%.2f is the larges number:", num_1);
		
	}
	
	if(num_2 >= num_1 && num_2 >= num_3)
	{
		printf("%.2f is the larges number:", num_2);
	}
	
	if(num_3 >= num_2 && num_3 >= num_1)
	{
		printf("%.2f is the larges number:", num_3);
	}
	 
	if(num_1 == num_2 && num_1 == num_3 && num_2 == num_3)
	{
		printf("they are all equal");
	}
}
	/*
	if(num_1> num_3)
	{
		printf("The bigest inputet value is %.2f",num_1);
	}
	if((num_2,num_3)>num_1)
	{
		printf("The bigest inputet value is %.2f",num_2);
	}
	
		if((num_1,num_3)>num_2)
	{
		printf("The bigest inputet value is %.2f",num_1);
	}
} 
*/
