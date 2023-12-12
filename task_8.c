#include <stdio.h>
int main()
{

	int minutes;
	int hour;

	printf("Insert the final hour:");
	scanf("%d",&hour);

	printf("Insert the final minute:");
	scanf("%d",&minutes);

	int h = 0;


	while(h <= hour)
	{
		int m = 0;
		while(m<60)
		{
			if(m%10==0)
			{
				printf("%02d:%02d \n",h,m);
			}
			if(m == minutes && h == hour)
			{
				printf("Time has stopped");
				break;
			}

			m++;

		}
		h++;
	}
}
