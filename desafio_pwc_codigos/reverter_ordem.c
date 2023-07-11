#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura criada para facilitar o manejo das palavras

typedef struct word {

  char palavra[25];     // palavras com no máximo 20 caracteres
  struct word *proxima; // ligação para a próxima palavra

} Word;

// Procedimento para separar as palavras da frase

void separar_palavras(Word *palavras, char frase[500]) {
  Word *novo = palavras;
  int i = 0;

  if (frase) {
    while (frase[i] != '\n' && frase[i]) {
      char palavra[25];

      int j = 0;

      if (frase[i] != ' ') {
        while (frase[i] != ' ' && frase[i]) {
          palavra[j] = frase[i];
          j++;
          i++;
        }

        palavra[j] = '\0';
        strncpy(novo->palavra, palavra, 25);
        novo->proxima = malloc(sizeof(Word));
        novo = novo->proxima;
        i++;
      }
    }
  }
}

//procedimento usado nos testes durante a criaç]ao da lista de palavras

void imprimir_word(Word *word) {
  Word *auxiliar = word;

  if (auxiliar) {
    printf("\nPalavras:\n\n");
    while (auxiliar) {
      printf("%s\n", auxiliar->palavra);
      auxiliar = auxiliar->proxima;
    }
  }
}

int main() {
  char frase[500]; // frase com no máximo 500 caracteres
  fgets(frase, 500, stdin);

  Word *palavras = malloc(sizeof(Word));

  separar_palavras(palavras, frase);

  imprimir_word(palavras);

  return 0;
}