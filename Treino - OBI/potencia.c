#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);


    int numeros[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &numeros[i]);

    int soma = 0;

    for(int i = 0; i < n; i++){
        int num, ex;
        num = numeros[i] / 10;
        ex = numeros[i] % 10;

        soma += pow(num, ex);
    }

    printf("%d", soma);
}