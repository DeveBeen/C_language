#include <stdio.h>
int main()
{
	int A[10] = {0};
	int rock = 0;
	int scissors = 0;
	int paper = 0;
	int Victory = 0;
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
		
		if(A[i] == 1)
		{
			scissors = scissors + 1;
		}
		else if(A[i] == 2)
		{
			rock = rock + 1;
		}
		else if(A[i] == 3)
		{
			paper = paper + 1;
		}
	}
	
	if(rock * scissors * paper == 0)
	{
		if(rock == 5)
		{
			Victory = 0;
		}
		else if(scissors == 5)
		{
			Victory = 0;
		}
		else if(paper == 5)
		{
			Victory = 0;
		}
		else
		{
			if(rock == 0)
			{
				Victory = scissors;
			}
			else if(scissors == 0)
			{
				Victory = paper;
			}
			else if(paper == 0)
			{
				Victory = rock;
			}
		}
	}
	else
	{
		Victory = 0;
	}
	
	printf("%d", Victory);
}