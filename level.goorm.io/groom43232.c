#include <stdio.h>
int main()
{
	int n;
	int total=0;
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			total = total + i;
		}
	}
	
	printf("%d", total);
	
	return 0;
}