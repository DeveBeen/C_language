#include <stdio.h>
int main()
{
	int n = 0;
	int total = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		total = n - i;
		for(int j = 0; j < total; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}