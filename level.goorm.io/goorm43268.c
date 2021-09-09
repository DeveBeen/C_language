#include <stdio.h>
int main()
{
	int kw = 0;
	float cost = 0;
	
	scanf("%d", &kw);
	
	if(kw >= 300)
	{
		cost = kw * 0.01;
	}
	else if(kw >= 200)
	{
		cost = kw * 0.009;
	}
	else if(kw >= 100)
	{
		cost = kw * 0.007;
	}
	else
	{
		cost = kw * 0.005;
	}
	
	printf("%.2f", cost);
}

