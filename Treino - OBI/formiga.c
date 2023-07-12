#include <stdio.h>
#include <stdlib.h>
#include "func_matrizes.h"

int main(){
	
	int s, t, p;
	scanf("%d %d %d", &s, &t, &p);
	
	int **grafo;
	grafo = matriz_int(s, s);
	preencher_mint(grafo, s, s, 1);

	
	for(int i = 0; i < s; i++)
		scanf("%d", &grafo[i][i]);
		
	
	for(int i = 0; i < t; i++){
		int i, j;
		scanf("%d %d", &i, &j);
		i--;
		j--;
		grafo[i][j] = 1;
		grafo[j][i] = 1;
	}
	
	int tuneis = 0;
	
	while(1){
		int coordenada = -1;
		
		for(int i = 0; i < s; i++){
			int maior = -1001;
		
			if(grafo[p][i] == 1)
				if((grafo[i][i] > grafo[p][p]) && (grafo[i][i] > maior)){
					maior = grafo[i][i];
					coordenada = i;
				}
		}
			
		if(coordenada == -1)
			break;
		
		p = coordenada;
		tuneis++;
	}
	
	printf("%d", tuneis);
	
	return 0;
}