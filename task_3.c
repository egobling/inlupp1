#include <stdio.h>

int main()
{
	printf("input the value of the radius:");
	float r = 0;
	
	scanf("%f",&r);
	
	float pi = 3.1415;
	
	float area = pi * r*r;
	float Omkrets = 2*pi*r;
	
	printf("%f\n",area);
	printf("%f\n",Omkrets);
	return 0;
	}

