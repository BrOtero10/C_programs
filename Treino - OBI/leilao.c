/*
Entrada
A primeira linha contém um inteiro N, o número de lances recebidos. A seguir são dados os N
lances, na ordem em que foram feitos. Cada lance é dado em duas linhas: a primeira linha contém
uma cadeia de caracteres C, o nome da pessoa que fez o lance; a segunda linha contém um inteiro
V , o valor do lance.
Saída
Seu programa deve produzir duas linhas. A primeira linha deve conter o nome da pessoa que fez o
lance ganhador. A segunda linha deve conter o valor do lance ganhador.
Restrições
• 0 ≤ N ≤ 10 000
• C contém apenas letras maiúsculas e minúsculas, não acentuadas.
• C contém no mínimo uma e no máximo 10 letras.
• 1 ≤ V ≤ 100 000
*/

#include <stdio.h>
#include <string.h>

/* sget() empacota fgets para stdin, chamando fflush e retirando o \n do final*/

int sget( char* vetor, int tam) {
    fflush(stdin); // Livra-se de teclas antigas
    if (fgets(vetor, tam, stdin)) { 
        int i;
        for( i=0; vetor[i] != '\n' && vetor[i]; ++i)
            ;
        vetor[i] = '\0';
    }
}

int main(){
    int n;
    scanf("%d", &n);

    char nome[10], ganhador[10];
    int valor, maior = 0;;

    for(int i = 0; i < n; i++){
        sget(nome, 10);
        scanf("%d", &valor);

        if(valor > maior){
            maior = valor;
            strcpy(ganhador, nome);
        }
    }

    printf("%s\n%d", ganhador, maior);
    return 0;
}