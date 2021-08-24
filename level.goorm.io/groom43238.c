#include <stdio.h>
int main()
{
	int Number = 0;
	int logic = 0;
	
	scanf("%d", &Number);
	
	for(int i = 1; i <= Number; i++)
	{
		if(Number % i == 0)
		{
			logic = logic + i;
		}
	}
	
	if(logic == Number + 1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}

