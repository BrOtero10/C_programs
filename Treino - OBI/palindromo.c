#include <stdio.h>

int main(){
	
	int n_elem, conta = 0;
	scanf("%d", &n_elem);
	
	int lista[n_elem], repeticoes = n_elem / 2;
	
	for(int i = 0; i < n_elem; i++)
		scanf("%d", &lista[i]);
	
	int k = 0, l = 0;
	
	for(int i = 0; i < repeticoes - l; i++){
		
		while(lista[i] != lista[n_elem - i - k - 1]){
			if(lista[i] < lista[n_elem - i - k - 1]){
				lista[i] += lista[i+1];
				
				for(int j = i + 1; j < n_elem - 1; j++)
					lista[j] = lista[j + 1];
				
				k++;
				conta++;
			}
			else{
				lista[n_elem - i - k - 2] += lista[n_elem - i - k - 1];
				k++;
				conta++;
			}
		}
		
		l = k / 2;
	}
	
	printf("%d", conta);
	return 0;
}