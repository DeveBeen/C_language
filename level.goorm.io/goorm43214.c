/* 좀비런 : 가장 빠른 좀비랑 같은 속도로 달리기 */
#include <stdio.h>
int main(){
	int zombie = 0;
	int zombie_run[1000] = {0};
	int zombie_run_max = 0;
	int logic = 0;
	
	scanf("%d", &zombie);
	
	for(int i = 0; i < zombie; i++){		
		scanf("%d", &zombie_run[i]);		
	}
	
	for(int j = 0; j < zombie; j++){
		
		for(int k = 0; k < zombie; k++){
			
			if(zombie_run[j] >= zombie_run[k]){
				logic += 1;
			}
		}
		
		if(logic == zombie){
			zombie_run_max = zombie_run[j];
		}
	}
	printf("%d", zombie_run_max);
}