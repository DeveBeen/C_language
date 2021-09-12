/* 범위 내의 숫자를 분해하여 곱한 후 합 구하기 */
#include <stdio.h>
int main(){
	int start, end = 0;
	int sigma = 0;
	int multiplication = 0;
	
	scanf("%d %d", &start, &end);
	
	for(int i = start; i <= end; i++){
		
		int thousant = i/1000;
		int hundred = (i - 1000*thousant)/100;
		int ten = (i - 1000*thousant - 100*hundred)/10;
		int one = i - 1000*thousant - 100*hundred - 10*ten;
		
		if(i >= 1000){
			multiplication = thousant * hundred * ten * one;
			sigma += multiplication;
		}
		else if(i >= 100){
			multiplication = hundred * ten * one;
			sigma += multiplication;
		}
		else if(i >= 10){
			multiplication = ten * one;
			sigma += multiplication;
		}
	}
	printf("%d", sigma);
	return 0;
}