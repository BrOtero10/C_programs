/* compare.c - Ler dois valores e imprimir uma das três mensagens a seguir: 'Números iguais', caso os números sejam iguais; 'Primeiro maior', caso o primeiro seja maior que o segundo; 'Segundo maior', caso o segundo seja maior que o primeiro.

    By: Bruno Otero - TADS_1sem2023 - 07/04
*/

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);
    
    if(a==b)printf("Numeros iguais");
    else{
        if(a>b) printf("Primeiro maior");
        else printf("Segundo maior");
    }
    
    return 0;
}