#include <stdio.h>
int main()
{
	int year = 0;
	
	scanf("%d", &year);
	
	if(year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			if(year % 400 == 0)
			{
				printf("Leap Year");
			}
			else
			{
				printf("Not Leap Year");
			}
		}
		else
		{
			printf("Leap Year");
		}
	}
	else
	{
		printf("Not Leap Year");
	}
}

