#include<stdio.h>
#include<math.h>

double angulo_atan(int x1, int y1, int x2, int y2){
    int var_x = x2 - x1, var_y = y2 - y1;
    
    return atan2(var_y, var_x);
}

double maior_vdouble(double vetor[], int elem){
    double maior = vetor[0];
    
    for(int i = 0; i < elem; i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }
    
    return maior;
}

int indice_vdouble(double vetor[], int elem, double valor){
    
    for(int i = elem; i >= 0; i--){
        if(vetor[i] == valor)
            return i;
    }
    
    return -1;
}

int main()
{
    int n, pulos = 0;    
    double prov_dis, prov_alt;
    scanf("%d", &n);
    
    int dis[n], alt[n];
    
    for(int i = 0; i < n; i++){
        int d, h;
        scanf("%d %d", &d, &h);
        dis[i] = d;
        alt[i] = h;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            
            if(dis[j] > dis[j+1]){
            
                prov_dis = dis[j];
                dis[j] = dis[j+1];
                dis[j+1] = prov_dis;
            
                prov_alt = alt[j];
                alt[j] = alt[j+1];
                alt[j+1] = prov_alt;
                
            }
        }
    }
    
    int i = 0;
    while(i < n-1){
        
        double angulos[n - i - 1];
        
        for(int j = 0; j < n - i - 1; j++){
            
            double angulo_atual = angulo_atan(dis[i], alt[i], dis[j+i+1], alt[j+i+1]);
            angulos[j] = angulo_atual;
        }
        
        double m = maior_vdouble(angulos, n-i-1);
        int p = indice_vdouble(angulos, n-i-1, m);
        
        i++;
        i += p;
        
        pulos++;
    }
    
    
    printf("%d", pulos);
}