#include <stdio.h>
int main()
{
	
	int minutes;
	int hour;
	
	printf("hour:");
	scanf("%d",&hour);
	
	printf("minute:");
	scanf("%d",&minutes);
	
	int h= 0;
	int m =0;
	
	 
	do{ 
	 m =0;
		 h++;
		do{
			
			m++;
			if(m%10==0)
			{
				printf("%02d:%02d \n",h,m);
			}
				
		    if(m == minutes && h == hour)
		    {
				printf("Time has stoped");
				
				break;
			}
				
		}while(m<60);
		if(m == minutes && h == hour) break;

	}while( h <= hour);
	
}
