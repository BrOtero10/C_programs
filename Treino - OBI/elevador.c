/*
Dados os pesos de N caixas no primeiro andar, seu programa deve determinar se é 
possível ou não levar todas as N caixas para o segundo andar.

Entrada
A primeira linha da entrada contém um inteiro N indicando o número de caixas. 
A segunda linha da entrada contém N inteiros representando os pesos das caixas.

Saída
Imprima uma linha na saída. A linha deve conter o caracter S caso seja possível,
ou N caso não seja possível levar todas as caixas até o segundo andar da fábrica.

Restrições
1 ≤ N ≤ 104
O peso das caixas está entre 1 e 105, inclusive.
Além disso, existe uma restrição de segurança importante: durante uma viagem do elevador, 
a diferença de peso entre as cabines pode ser no máximo de 8 unidades.
*/

#include <stdio.h>

void ordenar_vint(int vetor_int[], int num_elem){
    
    for(int i = 0; i < num_elem; i++){
        for(int j = 0; j < num_elem - i - 1; j++){
            if(vetor_int[j] > vetor_int[j + 1]){
                int x = vetor_int[j];
                vetor_int[j] = vetor_int[j + 1];
                vetor_int[j + 1] = x;
            }
        }
    }
}

int main(){
    int num_caixas;
    scanf("%d", &num_caixas);

    int pesos[num_caixas];

    for(int i = 0; i < num_caixas; i++)
        scanf("%d", &pesos[i]);

    ordenar_vint(pesos, num_caixas);

    if(pesos[0] > 8){
        printf("N");
        return 0;
    }

    for(int i = 0; i < num_caixas - 1; i++){

        if(pesos[i + 1] - pesos[i] > 8){
            printf("N");
            return 0;
        }
    }

    printf("S");
    return 0;
}