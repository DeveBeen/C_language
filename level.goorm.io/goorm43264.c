#include <stdio.h>
int main()
{
	int n = 0;
	int total = 0;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++)
	{
		total = total + i;
		
		if(total > n)
		{
			printf("%d", i);
			
			break;
		}
	}
}

