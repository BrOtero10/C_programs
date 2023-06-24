#include <stdio.h>

int busca_bin_vint(int vetor_int[], int num_elem, int valor_procurado){

    //if(pertence_vint(vetor_int, num_elem, valor_procurado) == 0) return -1;
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_int[m]) return m;
        if(valor_procurado < vetor_int[m]) f = m - 1;
        else i = m + 1;
    }
    
}

int main(){
    int n, m, tempo = 0;

    scanf("%d %d", &n, &m);

    int ordem[n], entregas[m];

    for(int i = 0; i < n; i++)
        scanf("%d", &ordem[i]);

    for(int i = 0; i < m; i++)
        scanf("%d", &entregas[i]);

    int continuar = 0;

    for(int i = 0; i < m; i++){

        if(ordem[continuar] == entregas[i])
            continue;

        else{
            int dist = busca_bin_vint(ordem, n, entregas[i]) - continuar;
            continuar = busca_bin_vint(ordem, n, entregas[i]);
            if(dist < 0) dist = -dist;
                tempo += dist;
        }

    }

printf("%d", tempo);

return 0;
}
