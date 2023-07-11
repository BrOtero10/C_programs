#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct letras{
  char letra_atual;
  struct letras *proxima;
} Letras;

//Função para inserir uma letra na lista de letras já utilizadas

void inserir_letras(Letras **letras, char letra){
  Letras *novo = malloc(sizeof(Letras));

  if(novo){
    novo -> letra_atual = letra;
    novo -> proxima = *letras;
    *letras = novo;
  }
}

//Função que verifica se a letra atual já foi utilizada, baseando-se na lista de letras criada

int verificar_letra(Letras *letras, char letra){

  if(letras){
    Letras *auxiliar = letras;

    while(auxiliar){
      if(auxiliar -> letra_atual == letra)
        return 0; //Repetida
      auxiliar = auxiliar -> proxima;
    }
  }

  return 1; //Nova letra
}

int main(){

  char palavras[200]; // frase com no máximo 200 caracteres
  fgets(palavras, 200, stdin);

  Letras *letras = malloc(sizeof(Letras));

  for(int i = 0; i < strlen(palavras); i++){
    if(verificar_letra(letras, palavras[i])){
      inserir_letras(&letras, palavras[i]);
      printf("%c", palavras[i]);
    }
  }
  
  return 0;
}