#include <stdio.h>
int main()
{
	int n = 0;
	int multitap[10] = {0};
	int total = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &multitap[i]);
		
		total = total + multitap[i];
	}
	
	total = total + 1 - n;
	
	printf("%d", total);
}