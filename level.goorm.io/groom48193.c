#include <stdio.h>

int main()
{
	int N;
	int count=0;
	int h_max=0;
	int h[100000];
	
	scanf("%d", &N);
	
	for(int i=0; i<N; i++)
	{
		scanf("%d", &h[i]);
	}
	
	for(int i=N-1; i>=0; i--)
	{
		if(h_max < h[i])
		{
			h_max = h[i];
			count = count + 1;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
