#include <stdio.h>

int main(){
	int num_a, num_b;
	scanf("%d", &num_a);
	scanf("%d", &num_b);
	
	int i_a = 1, i_b = 1, result_a = 0, result_b = 0, cond_a = 0, cond_b = 0;
	
	while(num_a + num_b != 0){
		if(num_a % 10 > num_b % 10){
			result_a += (num_a % 10) * i_a;
			i_a *= 10;
			cond_a = 1;
		}
			
		else if(num_b % 10 > num_a % 10){
			result_b += (num_b % 10) * i_b;
			i_b *= 10;
			cond_b = 1;
		}
		
		else{
			result_a += (num_a % 10) * i_a;
			result_b += (num_b % 10) * i_b;
			i_a *= 10;
			i_b *= 10;
			cond_a = 1;
			cond_b = 1;
		}
		
		num_a /= 10;
		num_b /= 10;
	}
	
	if(cond_a == 0)
		result_a = -1;
	if(cond_b == 0)
		result_b = -1;
	
	if(result_b > result_a)
		printf("%d %d", result_a, result_b);
	else
		printf("%d %d", result_b, result_a);
	
	return 0;
}
