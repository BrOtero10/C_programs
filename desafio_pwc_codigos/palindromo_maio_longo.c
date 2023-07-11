#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar_palindromo(char palavra[100], int inicio, int fim){

  int repeticoes = (fim - inicio) / 2;

  for(int i = 0; i < repeticoes; i++)
    if(palavra[i + inicio] != palavra[fim - i - 1])
      return 0;

  return 1;


  for(int i = inicio; i < fim - inicio; i++){
    
  }
}

int main(){
  char palavra[100];
  fgets(palavra, 100, stdin);

  int tamanho_maior = 0;
  char maior[100];

  for(int i = 0; i < strlen(palavra); i++){
    for(int j = strlen(palavra); j > i; j--){
      if(tamanho_maior > j - i)
        continue;
      
      if(verificar_palindromo(palavra, i, j)){
        tamanho_maior = j - i;
        int posicao = 0;
        for(int k = i; k < j; k++){
          maior[posicao] = palavra[k];
          posicao++;
        }
      }
    }
  }

  printf("%s", maior);
  return 0;
}