#include <stdio.h>

int main(){
    int ano, ultimo = 1986;

    scanf("%d", &ano);

    while(ano >= ultimo)
        ultimo += 76;

    printf("%d", ultimo); 
    return 0;
}