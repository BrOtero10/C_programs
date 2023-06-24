/*
Entrada
A primeira linha da entrada contém um inteiro X, a coordenada x da marcação. A segunda linha
contém um inteiro Y , a coordenada y da marcação.
Saída
Seu programa deve produzir uma única linha, contendo um único caractere, que deve ser a letra
maiúscula ‘S’ se a marcação está dentro do campo; se a marcação está fora do campo de jogo a
linha deve conter a letra maiúscula ‘N’.
Restrições
• −100 ≤ X ≤ 100
• −100 ≤ Y ≤ 100
*/
#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    if(x < -8 || x > 8)
        printf("N");
    else if(y < 0 || y > 8)
        printf("N");

    else
        printf("S");
    
    return 0;
}