#include <stdio.h>
int main()
{
	int A, B;
	
	scanf("%d %d", &A, &B);
	
	int share = A/B;
	int remainder = A -share * B;
	
	printf("%d %d", share, remainder);
}