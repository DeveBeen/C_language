#include <stdio.h>
int main()
{
	int base = 0;
	int high = 0;
	
	scanf("%d %d", &base, &high);
	
	float area = base * high * 0.5;
	
	printf("%.1f", area);
}

