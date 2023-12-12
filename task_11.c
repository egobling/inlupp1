#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	double r;
	printf("input a radius: ");
	int tokens_read = scanf("%lf",&r);
	if(tokens_read < 1 )
	{
		printf("An Error occurd\n");
		return 1;
		}
	
	double S = 0;
	double A;

	int i = 0;
	int done = 0;
	
	double B;
	while(!done)
	{
		B=A;
		i++;
		double x = 2*r*((double)rand()/RAND_MAX) - r;
		double y = 2*r*((double)rand()/RAND_MAX) - r;
		double f; 
		if(x*x + y*y <= r*r)
		{
		 f = 1;
		}
		else
		{
		 f = 0;
		}
		
		f *= 4*r*r;
		S = S+f;
		A = S/i;
	
		if(fabs(A-B)< 0.00001 && i > 100)
		{
			done = 1;
		}
		
		printf("i: %d, A: %lf \n", i, A);	
	}
}
