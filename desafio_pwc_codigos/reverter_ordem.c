#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura criada para facilitar o manejo das palavras

typedef struct word{
	
	char palavra[25]; //palavras com no máximo 20 caracteres
	struct word *proxima; //ligação para a próxima palavra
	
}Word;

//Procedimento para separar as palavras da frase

void separar_palavras(Word *palavras, char frase[500]){
  Word *novo = palavras;
  int i = 0;

  if(frase){
    while(frase[i] != '\n' && frase[i]){
      char *palavra[25];
      *palavra = malloc(25 * sizeof(char));

      int j = 0;

      if(frase[i] != ' '){
        while(frase[i] != ' ' && frase[i]){
          *palavra[j] = frase[i];
          j++;
          i++;
        }

        strncpy(novo -> palavra, *palavra, 25);
        novo = novo -> proxima;
        i++;
      }
    }
  }
}
	

int main(){
	char *frase[500]; //frase com no máximo 500 caracteres
  *frase = malloc(500 * sizeof(char));
	fgets(*frase, 500, stdin);

  Word *palavras = malloc(sizeof(Word));

  
  
  return 0;	
}