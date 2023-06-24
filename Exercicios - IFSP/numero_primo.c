/*
numero_primo
By: Bruno Otero - 1sem2023TADS - 09/05
*/

#include <stdio.h>

int main(){
    int number, i, conditional = 0;

    printf("Digite um numero: ");
    scanf("%d", &number);


    //Excessão de numero primo
    if(number == 2){
        printf("E' um numero primo.");
    }
	
	if(number == 1){
		printf("Nao e' um numero primo.");
	}

    else{

        for(i = number - 1; i >= 2; i--){

            //Testa se a divisão do número por qualquer antecessor seu se iguala a 0
            if((number % i) == 0){
                printf("Nao e' um numero primo.");
                conditional++;
                break;
            }
        }

        //Só exibirá se o número for primo
        if(conditional == 0)
            printf("E' um numero primo.");
    }
}
