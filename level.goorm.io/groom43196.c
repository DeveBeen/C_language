#include <stdio.h>
int main()
{
	int n = 0;
	int output = 0;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			output = i + n * j;
			printf("%d ", output);
		}
		printf("\n");
	}
}