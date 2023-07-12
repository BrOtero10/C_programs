#include <stdio.h>

int main(){
	
	int resultado, mundial, olimpico;
	scanf("%d", &resultado);
	scanf("%d", &mundial);
	scanf("%d", &olimpico);
	
	if(resultado < mundial)
		printf("RM\n");
	else
		printf("*\n");
	if(resultado < olimpico)
		printf("RO");
	else
		printf("*");
	
	return 0;
}