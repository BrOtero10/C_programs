#include <stdio.h>

int soma_alg(int numero){
	
	if(numero == 0)
		return 0;
	
	int soma = 0, resto;
	
	while(numero != 0){
		resto = numero % 10;
		soma += resto;
		numero = numero / 10;
	}
	
	return soma;
}
	


int main(){
	int numero, com, fim;
	
	scanf("%d", &numero);
	scanf("%d", &com);
	scanf("%d", &fim);
	
	int cont = 0;
	
	for(int i = com; i <= fim; i++)
		if(soma_alg(i) == numero)
			cont++;
	
	printf("%d", cont);
	
	return 0;
}