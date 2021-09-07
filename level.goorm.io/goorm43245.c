#include <stdio.h>
int main()
{
	int n = 0;
	int num[1000] = {0};
	int max = 0;
	int count = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		
		if(i == 0)
		{
			max = 0;
		}
		else if(num[i-1] < num[i])
		{
			max = num[i];
			count = i+1;
		}
		else
		{
			max = num[i-1];
		}
	}
	printf("%d %d", max, count);
}