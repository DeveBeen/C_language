#include <stdio.h>
int main() 
{
	int n;
	int league = 0;
	
	scanf("%d", &n);
	
	league = (n*(n-1))/2;
	
	printf("%d", league);
}
	
