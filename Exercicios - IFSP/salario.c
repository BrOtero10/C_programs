/* salario.c - Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total. 

    By: Bruno Otero - TADS_1sem2023 - 07/04
*/

#include <stdio.h>

int main() {
    double slfixo, vendas, sltotal;
    
    printf("Salario fixo: ");
    scanf("%lf", &slfixo);
    printf("Valor das vendas: ");
    scanf("%lf", &vendas);
    
    if(slfixo > 1500){
        
    sltotal = slfixo + vendas * 0.03;
    printf("Salario total = %g", sltotal);
    
    }
    
    else{
    
    sltotal = slfixo + 45 + (vendas-1500) * 0.05;
    printf("Salario total = %g", sltotal);
    
    }

    return 0;
}