#include <stdio.h>
int main()
{
	int cost = 0;
	int fh_coin = 0;
	int h_coin = 0;
	int ft_coin = 0;
	int t_coin = 0;
	
	scanf("%d", &cost);
	
	fh_coin = (1000 - cost) / 500;
	h_coin = (1000 - cost - 500 * fh_coin) / 100;
	ft_coin = (1000 - cost -500 * fh_coin - 100 * h_coin) / 50;
	t_coin = (1000 - cost - 500 * fh_coin - 100 * h_coin - 50 * ft_coin)/10;
	
	printf("%d %d %d %d ", fh_coin, h_coin, ft_coin, t_coin);
}