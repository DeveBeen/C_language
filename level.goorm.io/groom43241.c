#include <stdio.h>
int main()
{
	double total=0;
	double a, b;
	char mat;
	
	scanf("%lf %c %lf", &a, &mat, &b);
	
	if(mat == '+')
	{
		total = a + b;
		printf("%.0lf", total);
	}
	else if(mat == '-')
	{
		total = a - b;
		printf("%.0lf", total);
	}
	else if(mat == '*')
	{
		total = a * b;
		printf("%.0lf", total);
	}
	else if(mat == '/')
	{
		total = a / b;
		printf("%.2lf", total);
	}
	
	return 0;
}