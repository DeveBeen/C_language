#include <stdio.h>
int main()
{
	int N;
	int total = 0;
	
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++)
	{
		
		if(i % 3 == 0)
		{
			total = total + i;
		}
		else if(i % 5 == 0)
		{
			total = total + i;
		}
		
	}
	
	printf("%d", total);
}
