#include <stdio.h>
int main()
{
	int N,M = 0;
	
	scanf("%d %d", &N, &M);
	
	for(int i = 0; i < N; i++)
	{
		if(i % 2 == 0)
		{
			for(int j = 0; j < M; j++)
			{
				printf("#");
			}
		}
		else
		{
			if(i % 4 == 1)
			{
				for(int j = 1; j < M; j++)
				{
					printf(".");
				}
				printf("#");
			}
			else if(i % 4 == 3)
			{
				printf("#");
				for(int j = 1; j < M; j++)
				{
					printf(".");
				}
			}
		}
		printf("\n");
	}
}
