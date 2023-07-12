#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Estrutura criada para facilitar o manejo das palavras

typedef struct word {

  char palavra[25];     // palavras com no máximo 25 caracteres
  struct word *proxima; // ligação para a próxima palavra

} Word;

// Procedimento para separar as palavras da frase

void separar_palavras(Word *palavras, char *frase) {
  Word *novo = palavras;
  int i = 0;

  if(frase) {
    while (frase[i] != '\n' && frase[i]) {
      char palavra[25];

      int j = 0;

      if (frase[i] != ' ') {
        while (frase[i] != ' ' && frase[i] != '\n') {
          palavra[j] = frase[i];
          j++;
          i++;
        }
        
        palavra[j] = '\0';
        strncpy(novo->palavra, palavra, 25);
        novo->proxima = malloc(sizeof(Word));
        novo = novo->proxima;
        if(frase[i] != '\n')
          i++;
      }

      else
        i++;
    }
  }
}

//procedimento para imprimir a frase palavra por palavra

void imprimir_word(Word *word) {
  Word *auxiliar = word;

  if(auxiliar) {
    printf("\n\n");
    while (auxiliar) {
      printf("%s ", auxiliar->palavra);
      auxiliar = auxiliar->proxima;
    }
  }
}

//Procedimento para obter o ultimo caractere de uma palavra

char ultimo_caractere(char *palavra){

  int i;
  for(i = 0; palavra[i] != '\0' && palavra[i]; i++)
    ;

  return palavra[i - 1];
  
}

//Procedimento para alterar as primeiras letras das palavras em inicio de frase

void altera_palavras(Word *palavras){
  Word *auxiliar = palavras;

  if(auxiliar){

    //Altera a primeira letra da primeira palavra
    
    char primeira_letra = toupper(auxiliar -> palavra[0]);
    auxiliar -> palavra[0] = primeira_letra;

    while(auxiliar -> proxima){
      char ult = ultimo_caractere(auxiliar -> palavra);

      //verifica se a última letra é um terminador de frase

      if(ult == '.' || ult == '!' || ult == '?'){
        primeira_letra = toupper(auxiliar -> proxima ->  palavra[0]);

        //altera a primeira letra da palavra após o terminador de frase
        
        auxiliar -> proxima -> palavra[0] = primeira_letra;
      }
      auxiliar = auxiliar -> proxima;
    }
  }
}