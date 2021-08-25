#include <stdio.h>
int main()
{
	int A,B = 0;
	int total = 0;
	
	scanf("%d %d", &A, &B);
	
	for(int i = A; i <= B; i++)
	{
		for(int j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
				total = total + j;
			}
		}
		if(i == total)
		{
			printf("%d ", i);
		}
		total = 0;
	}
	
	return 0;
}

