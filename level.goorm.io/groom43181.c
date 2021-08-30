#include <stdio.h>
int main()
{
	int n = 0;
	int count = 1;
	
	scanf("%d", &n);
	
	int refeat = n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < refeat; j++)
		{
			printf(" ");
		}
		for(int k = 0; k < count; k++)
		{
			printf("*");
		}
		printf("\n");
		refeat = refeat - 1;
		count = count + 2;
	}
}

