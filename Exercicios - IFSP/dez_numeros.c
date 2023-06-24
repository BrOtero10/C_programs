#include <stdio.h>

int main(){
    int i, numero, maiores_zero = 0, menores_zero = 0, soma_maiores_zero = 0, soma_menores_zero = 0;

    for(i = 0; i < 10; i++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numero);

        if(numero > 0){
            maiores_zero++;
            soma_maiores_zero += numero;
        }

        if(numero < 0){
            menores_zero++;
            soma_menores_zero += numero;
        }
    }
	
	printf("Foram digitados %d numeros maiores que zero\n", maiores_zero);
	printf("A soma dos numeros maiores que zero e' %d\n", soma_maiores_zero);
	printf("Foram digitados %d numeros menores que zero\n", menores_zero);
	printf("A soma dos numeros menores que zero e' %d\n", soma_menores_zero);
	
	return 0;
}