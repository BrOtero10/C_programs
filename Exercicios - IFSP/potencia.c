#include <stdio.h>

int potencia(int base, int expoente){
	
	int i, resultado = 1;
	
	for(i = 0; i < expoente; i ++)
		resultado *= base;
	
	return resultado;
}