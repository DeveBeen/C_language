#include <stdio.h>
int main()
{
	int A, B, C, N = 0;
	int result = 0;
	
	scanf("%d %d %d %d", &A, &B, &C, &N);
	
	int A_n = N/A;
	int B_n = N/B;
	int C_n = N/C;

	for (int i = 0; i <= C_n; i++)
	{
		int C_n = C * i;
		for (int k = 0; k <= B_n; k++) 
		{
			int B_n = C_n + B * k;
			for (int p = 0; p <= A_n; p++) 
			{
				int A_n = B_n + A * p;
				if (A_n == N) 
				{
					printf("1");
					return 0;
				}
			}
		}
	}
	printf("0");
}
