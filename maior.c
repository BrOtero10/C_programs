/* maior.C - Lê dois números inteiros A e B e imprima o maior deles.
    By: Bruno Otero - TADS_1sem2023 - 07/04
*/

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);
    
    if(a>b) printf("%d", a);
    else printf("%d", b);

    return 0;
}