#include <stdio.h>
#inclyde "func_vetores.h"

int main(){
	
	int s, t, possiveis = 0;
	
	scanf("%d %d", &s, &t);
	
	int saloes[s];
	for(int i = 0; i < s; i++)
		saloes[i] = i + 1;
	
	int tuneis1[t];
	int tuneis2[t];
	for(int i = 0; i < t; i += 2){
		int x, y;
		scanf("%d %d", &x, &y);
		tuneis1[i] = x;
		tuneis1[i + 1] = y;
		tuneis2[i] = y;
		tuneis2[i + 1] = x;
	}
	
	int p;
	scanf("%d", &p);
	
	for(int i = 0; i < p; i++){
		int n;
		scanf("%d", &n);
		
		int possivel_caminho[n];
		
		for(int j = 0; j < n; j++)
			scanf("%d", &possivel_caminho[j]);
		
	}
	
	