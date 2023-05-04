/* identificador.c - identifica o numero de vezes que 3 caracteres em sequencia de um texto se repetem
	By: Bruno Otero
*/

#include <stdio.h>
#include <string.h>
 
int main(void) {

	char texto[1000], leitura[10], uniao[50];
	char a, astr[2];
	int i, j, cont = 0;

	printf(" Digite um texto: ");
	gets(texto);
	printf(" Digite uma palavra: ");
	gets(leitura);

	for(i = 0; i < strlen(texto) - strlen(leitura) + 1; i++){

		uniao[0] = '\0'; //Limpa o valor de uniao

		for(j=0; j < strlen(leitura); j++){ //Forma as combinações possiveis com o numero de letras de leitura
        
			a = '\0'; //Limpa o valor de a
			astr[0] = '\0'; //Limpa o valor de astr
			a = texto[i+j];
			astr[0] = a;
        
			strcat(uniao, astr); //Concatena astr em uniao
            
			}
			
	//	printf("%s -> %d\n", uniao, strcmp(leitura,uniao)); //Linha de controle
    
		if(strcmp(leitura, uniao) == 0) cont++; //Verifia se a igualdade entre leitura e uniao e aumenta o valor de cont

    
		}
    
	printf("A sequencia \"%s\" aparece %d vezes no texto \"%s\"", leitura ,cont, texto);

}