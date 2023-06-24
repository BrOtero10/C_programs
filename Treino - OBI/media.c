#include <stdio.h>

int main(){
	
	int num_a, num_b;
	scanf("%d %d", &num_a, &num_b);
	
	int razao, num_c;
	
	if(num_a > num_b){
		razao = num_a - num_b;
		num_c = num_b - razao;
	}
	
	else if(num_b > num_a){
		razao = num_b - num_a;
		num_c = num_a - razao;
	}
	
	printf("%d", num_c);
	return 0;
}