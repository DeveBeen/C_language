#include <stdio.h>
int main()
{
	int x, y = 0;
	int min = 0;
	
	scanf("%d %d", &x, &y);
	
	if(x < y)
	{
		printf("%d", x);
	}
	else
	{
		printf("%d", y);
	}
}

