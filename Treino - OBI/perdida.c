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

int busca_bin_vint(int valor_procurado, int vetor_int[], int num_elem){
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_int[m]) return m;
        if(valor_procurado < vetor_int[m]) f = m - 1;
        else i = m + 1;
    }
    
}

int main(){
    
    int num;
    
    scanf("%d", &num);
    
    int vet[num], comp_vet[num-1];
    
    for(int i = 0; i < num; i++){
        vet[i] = i + 1;
    }
    
    for(int j = 0; j < num - 1; j++){
        int x;
        scanf("%d", &x);
        comp_vet[j] = x;
    }
    
    ordenar_vint(comp_vet, num-1);
    
    for(int k = 0; k < num; k++){
        if(vet[k] == comp_vet[k])
            continue;
        
        if(vet[k] != comp_vet[k]){
            printf("%d", vet[k]);
            break;
        }
    }
    
    return 0;
    
}
