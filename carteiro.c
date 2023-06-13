#include <stdio.h>
#include "func_vetores.h"

int main(){
	int n, m, tempo = 0;
	
	scanf("%d %d", &n, &m);
	
	int ordem[n], entregas[m];
	
	for(int i = 0; i < n; i++)
		scanf("%d", &ordem[i]);
	
	for(int i = 0; i < m; i++)
		scanf("%d", &entregas[i]);
	
	int continuar = 0;
	
	for(int i = 0; i < m; i++){
		
		if(ordem[continuar] == entregas[i])
			continue;
		
		else{
			int dist = busca_bin_vint(ordem, n, entregas[i]) - continuar;
			continuar = busca_bin_vint(ordem, n, entregas[i]);
			if(dist < 0) dist = -dist;
			tempo += dist;
		}
		
	}
	
	printf("%d", tempo);
	
	return 0;
}