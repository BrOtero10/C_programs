/*
triangulo_floyd.c - Recebe um numero de linhas e escreve um triangulo de Floyd
By: Bruno Otero - 1sem2023TADS - 09/05
*/

#include <stdio.h>

int main(){

    int n, i, j, numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for(i = 0; i <= n; i++){
        for(j = 0; j < i; j++){
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
        
    }
    
    return 0;
}
