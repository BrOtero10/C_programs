#include <stdio.h>
#include <math.h>
#include "func_vetores.h"

double angulo_atan(int x1, int y1, int x2, int y2){
    int var_x = x2 - x1, var_y = y2 - y1;
    
    return atan2(var_y, var_x);
}


int main()
{
    int n, pulos = 0;    
    double prov_dis, prov_alt;
    scanf("%d", &n);
    
    int dis[n], alt[n];
    
    for(int i = 0; i < n; i++){
        int d, h;
        scanf("%d %d", &dis[i], &alt[i]);
    }
    
    ordenar_subordinado_vint(dis, alt, n);
    
    int i = 0;
    while(i < n - 1){
        
        double angulos[n - i - 1];
        
        for(int j = 0; j < n - i - 1; j++){
            
            double angulo_atual = angulo_atan(dis[i], alt[i], dis[j + i + 1], alt[j + i + 1]);
            angulos[j] = angulo_atual;
        }
        
        double m = busca_maior_vdouble(angulos, 0, n - i - 1);
        int p = busca_bin_vdouble(angulos, n - i, m);
        
        i++;
        i += p;
        
        pulos++;
    }
    
    
    printf("%d", pulos);
}