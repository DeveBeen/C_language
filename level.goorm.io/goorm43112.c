#include <stdio.h>
int main()
{
	int a, b, c, d = 0;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int value = a*b*c*d;
	
	printf("%d", value);
}