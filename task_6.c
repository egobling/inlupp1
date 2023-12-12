#include <stdio.h>
int main()
{
	
	int minutes;
	int hour;
	
	printf("Insert the final hour:");
	scanf("%d",&hour);
	
	printf("Insert the final minute:");
	scanf("%d",&minutes);
	
	for (int h= 0; h <= hour; h++)
	{ 
		
		for (int m =0 ;m<60; m++){
			
			if(m%10==0)
			{
				printf("%02d:%02d \n",h,m);
			}
			
		    if(m == minutes && h == hour)
		    {
				printf("Time has stopped");
				
				break;
				
				
		    }
				
		}

	}
	
}

