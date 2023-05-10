/*
ultrapassar_populacao.c - Calcula o tempo necessario para a população de A ultrapassar a população de B
By: Bruno Otero - 1sem2023TADS - 09/05
*/


#include <stdio.h>

int main(){

    int pais_a = 5E6, pais_b = 7E6;
    double natalidade_a = 0.03, natalidade_b = 0.02, tempo_necessario = 0;

    while(pais_a <pais_b){
        pais_a *= (1 + natalidade_a); //Calcula a variação da população de A em um ano, considerando a taxa de natalidade
        pais_b *= (1 + natalidade_b); //Calcula a variação da população de B em um ano, considerando a taxa de natalidade
        tempo_necessario ++;
    }

    printf("Foram necessarios %d anos para a populacao de A ultrapassar a de B", tempo_necessario);
    return 0;
}
