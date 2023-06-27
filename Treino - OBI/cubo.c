#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	
	int cont = 0;
	
	for(int i = a; i <= b; i++){
		double quadrada = sqrt(i);
		int qua = sqrt(i);
		double cubica = cbrt(i);
		int cub = cbrt(i);
		
		if(quadrada == qua)
			if(cubica == cub)
				cont++;
	}
	
	printf("%d", cont);
	return 0;
}