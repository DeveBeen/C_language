#include <stdio.h>
int main()
{
	int N = 0;
	int th, h, t, o = 0;
	int clap = 0;
	
	scanf("%d", &N);
	
	for(int i = 1; i < N; i++)
	{
		th = i/1000;
		h = (i - th*1000)/100;
		t = (i - th*1000 - h*100)/10;
		o = i - th*1000 - h*100 - t*10;
		
		if(th == 0)
		{
		}
		else if(th % 3 == 0)
		{
			clap += 1;
		}
		if(h == 0)
		{
		}
		else if(h % 3 == 0)
		{
			clap += 1;
		}
		if(t == 0)
		{
		}
		else if(t % 3 == 0)
		{
			clap += 1;
		}
		if(o == 0)
		{
		}
		else if(o % 3 == 0)
		{
			clap += 1;
		}
	}
	printf("%d", clap);
}