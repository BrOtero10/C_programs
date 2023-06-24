/*
Sua tarefa é, dadas as quantidades de azulejos azuis e brancos, determinar as dimensões da Sala de Audiências.

Entrada
A primeira linha da entrada contém um inteiro A, o número de azulejos azuis. 
A segunda linha contém um número inteiro B, o número de azulejos brancos.

Saída
Seu programa deve produzir uma única linha, contendo dois números inteiros, representando as dimensões da Sala (largura e comprimento). 
Se a largura for diferente do comprimento, seu programa deve imprimir primeiro a menor dimensão, seguida da maior dimensão. 
Se as quantidades de azulejos não forem corretas para construir o piso da Sala no formato descrito acima, seu programa deve imprimir "-1 -1".

Restrições
1 ≤ A ≤ 106
1 ≤ B ≤ 106
*/

#include <stdio.h>

int main(){
    int az_azuis, az_brancos;

    scanf("%d", &az_azuis);
    scanf("%d", &az_brancos);

    int area = az_azuis + az_brancos;

    int maior_d = area / 2;
    int menor_d = 1;

    int continuar = 1;

    while(continuar){

        int continuar2 = 0;

        for(int i = maior_d - 1; i > 2; i--){
                if(area % i == 0){
                    maior_d = i;
                    continuar2 = 1;
                    break;
            }
        }

        if(continuar2){
            for(int i = 2; i <= maior_d; i++){
                if(maior_d * i == area){
                    menor_d = i;
                    break;
                }
            }
        }
        

        if(maior_d * menor_d != area){
            printf("%d %d", -1, -1);
            return 0;
        }

        if((maior_d - 2) * (menor_d - 2) == az_brancos)
            continuar = 0;    
    }

    printf("%d %d", menor_d, maior_d);

    return 0;
}