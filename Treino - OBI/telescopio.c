/*
Tarefa
Dada uma lista com estrelas no céu,o fluxo de fótons que cada uma delas emite, e área de abertura de um telescópio, 
dizer quantas estrelas serão perceptíveis usando tal telescópio.

Entrada
A primeira linha da entrada terá um inteiro A (1 ≤ A ≤ 10.000) representando a área de abertura do telescópio (em milímetros
quadrados) a ser considerado. A segunda linha possui um inteiro N (1 ≤ N ≤ 10.000) representando o número de estrelas a serem
estudadas. As N linhas seguintes terão, cada uma, um inteiro F (1 ≤ F ≤ 20.000) representando o fluxo de fótons que cada uma
das N estrelas emitem (em fótons por segundo por milímetro quadrado).

Saída
Imprima um inteiro representando a quantidade de estrelas que serão percebidas ao se utilizar o telescópio em questão.
*/

#include <stdio.h>

int main(){
    int area_telescopio, num_estrelas;

    scanf("%d", &area_telescopio);
    scanf("%d", &num_estrelas);

    int fotons[num_estrelas];

    for(int i = 0; i < num_estrelas; i++)
        scanf("%d", &fotons[i]);

    int visiveis = 0;

    for(int i = 0; i < num_estrelas; i++){
        int perceptivel = fotons[i] * area_telescopio;

        if(perceptivel >= 40000000) 
            visiveis++;
    }

    printf("%d", visiveis);

    return 0;
    
}