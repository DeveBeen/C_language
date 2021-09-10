#include <stdio.h>
#include <math.h>
int main()
{
	int xo = 0;
	int yo = 0;
	int xt = 0;
	int yt = 0;
	float d = 0;
	
	scanf("%d %d", &xo, &yo);
	scanf("%d %d", &xt, &yt);
	
	d = (xo-xt)*(xo-xt) + (yo-yt)*(yo-yt);
	
	printf("%.2f", sqrt(d));
}