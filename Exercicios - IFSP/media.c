/*media.c - Recebe duas notas e exibe a média aritmética*/

#include <stdio.h>

int main(void){
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%g", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%g", &nota2);

	media=(nota1+nota2)/2;
	
	printf("Media=%g", media);
	return 0;
}