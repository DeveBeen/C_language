#include <stdio.h>
int main()
{
	int Jinwoo, Sunwoo = 0;
	int D = 0;
	
	scanf("%d %d", &Jinwoo, &Sunwoo);
	scanf("%d", &D);
	
	for(int i = 1; i <= D; i++)
	{
		if(Sunwoo == 1 && Jinwoo == 1)
		{
			if(i % 3 == 0)
			{
				Jinwoo = 0;
				Sunwoo = 2;
			}
			else if(i % 2 == 0)
			{
				Jinwoo = 1;
				Sunwoo = 1;
			}
			else
			{
				Jinwoo = 2;
				Sunwoo = 0;
			}
		}
		else if(i % 2 == 0)
		{
			Jinwoo = Jinwoo + (Sunwoo/2);
			Sunwoo = Sunwoo - (Sunwoo/2);
		}
		else
		{
			Sunwoo = Sunwoo + (Jinwoo/2);
			Jinwoo = Jinwoo - (Jinwoo/2);
		}
	}
	
	printf("%d %d", Jinwoo, Sunwoo);
}
