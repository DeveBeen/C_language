#include <stdio.h>
int main()
{
	int N = 0;
	int n[1000] = {0};
	int count[1000] = {0};
	
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &n[i]);
	}
	
	for(int j = 0; j < N; j++)
	{
		for(int k = 0; k < N; k++)
		{
			if(n[j] <= n[k])
			{
				count[j] = count[j] + 1;
			}
		}
		if(count[j] == N)
		{
			printf("%d", n[j]);
			return 0;
		}
	}
}
