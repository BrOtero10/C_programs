#include <stdio.h>

int main(){

    int cartas[5];
    char ordem;

    for(int i = 0; i < 5; i++)
        scanf("%d", &cartas[i]);

    if(cartas[0] > cartas[4]){
        for(int i = 0; i < 4; i++){

            if(cartas[i] < cartas[i + 1]){
                ordem = 'N';
                break;
            }

            ordem = 'D';
        }
    }

    if(cartas[0] < cartas[4]){
        for(int i = 0; i < 4; i++){

            if(cartas[i] > cartas[i + 1]){
                ordem = 'N';
                break;
            }

            ordem = 'C';
        }
    }

    printf("%c", ordem);

    return 0;
}