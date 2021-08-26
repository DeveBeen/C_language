#include <stdio.h>
int main()
{
	int N,c = 0;
	int t[100000] = {0};
	int tp = 0;
	
	scanf("%d %d", &N, &c);
	
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &t[i]);
	}
	
	for(int j = 0; j < N; j++)
	{
		if((t[j+1]-t[j]) > c)
		{
			tp = 0;
		}
		else
		{
			tp = tp + 1;
		}
	}
	
	printf("%d", tp);
	
	return 0;
}

