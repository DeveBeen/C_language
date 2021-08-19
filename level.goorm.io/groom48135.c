#include <stdio.h>
int main()
{
	long long N;
	long long total;
	long long line[80];
	
	scanf("%lld", &N);
	
	line[0] = 1;
	
	for(int i = 1; i<=N; i++)
	{
		if(i == 1)
		{
			line[i] = 1;
		}
		else
		{
			line[i] = line[i-1] + line[i-2];
		}
	}
	
	total = (line[N] * 2) + (line[N-1] * 2);
	
	printf("%lld", total);
}