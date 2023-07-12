#include <stdio.h>

void exibir_vint(int vetor_int[], int num_elem){
    
    printf("{ ");
    for(int i = 0; i < num_elem; i++){
        if(i != num_elem - 1)
            printf("%d, ", vetor_int[i]);
        
        else
            printf("%d }", vetor_int[i]);
    }
}

void exibir_vfloat(float vetor_int[], int num_elem){
    
    printf("{ ");
    for(int i = 0; i < num_elem; i++){
        if(i != num_elem - 1)
            printf("%f, ", vetor_int[i]);
        
        else
            printf("%f }", vetor_int[i]);
    }
}

void exibir_vdouble(double vetor_double[], int num_elem){
    
    printf("{ ");
    for(int i = 0; i < num_elem; i++){
        if(i != num_elem - 1)
            printf("%g, ", vetor_double[i]);
        
        else
            printf("%g }", vetor_double[i]);
    }
}

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

void ordenar_vfloat(float vetor_float[], int num_elem){
    
    for(int i = 0; i < num_elem; i++){
        for(int j = 0; j < num_elem - i - 1; j++){
            if(vetor_float[j] > vetor_float[j + 1]){
                float x = vetor_float[j];
                vetor_float[j] = vetor_float[j + 1];
                vetor_float[j + 1] = x;
            }
        }
    }
}

void ordenar_vdouble(double vetor_float[], int num_elem){
    
    for(int i = 0; i < num_elem; i++){
        for(int j = 0; j < num_elem - i - 1; j++){
            if(vetor_float[j] > vetor_float[j + 1]){
                double x = vetor_float[j];
                vetor_float[j] = vetor_float[j + 1];
                vetor_float[j + 1] = x;
            }
        }
    }
}

void ordenar_subordinado_vint(int vetor_dominante[], int vetor_subordinado[], int elem){
	
	for(int i = 0; i < elem; i++)
		for(int j = 0; j < elem - i - 1; j++)
			if(vetor_dominante[j] > vetor_dominante[j + 1]){
				
				int prov = vetor_dominante[j];
				vetor_dominante[j] = vetor_dominante[j + 1];
				vetor_dominante[j + 1] = prov;
				
				prov = vetor_subordinado[j];
				vetor_subordinado[j] = vetor_subordinado[j + 1];
				vetor_subordinado[j + 1] = prov;
			}
}

void ordenar_subordinado_vfloat(float vetor_dominante[], float vetor_subordinado[], int elem){
	
	for(int i = 0; i < elem; i++)
		for(int j = 0; j < elem - i - 1; j++)
			if(vetor_dominante[j] > vetor_dominante[j + 1]){
				
				float prov = vetor_dominante[j];
				vetor_dominante[j] = vetor_dominante[j + 1];
				vetor_dominante[j + 1] = prov;
				
				prov = vetor_subordinado[j];
				vetor_subordinado[j] = vetor_subordinado[j + 1];
				vetor_subordinado[j + 1] = prov;
			}
}

void ordenar_subordinado_vdouble(double vetor_dominante[], double vetor_subordinado[], int elem){
	
	for(int i = 0; i < elem; i++)
		for(int j = 0; j < elem - i - 1; j++)
			if(vetor_dominante[j] > vetor_dominante[j + 1]){
				
				double prov = vetor_dominante[j];
				vetor_dominante[j] = vetor_dominante[j + 1];
				vetor_dominante[j + 1] = prov;
				
				prov = vetor_subordinado[j];
				vetor_subordinado[j] = vetor_subordinado[j + 1];
				vetor_subordinado[j + 1] = prov;
			}
}

int busca_maior_vint(int vetor[], int inicio, int fim){
	
	int maior = vetor[inicio];
	
	for(int i = inicio + 1; i < fim; i++)
		if(vetor[i] > maior)
			maior = vetor[i];
	
	return maior;
}

float busca_maior_vfloat(float vetor[], int inicio, int fim){
	
	float maior = vetor[inicio];
	
	for(int i = inicio + 1; i < fim; i++)
		if(vetor[i] > maior)
			maior = vetor[i];
	
	return maior;
}

double busca_maior_vdouble(double vetor[], int inicio, int fim){
	
	double maior = vetor[inicio];
	
	for(int i = inicio + 1; i < fim; i++)
		if(vetor[i] > maior)
			maior = vetor[i];
	
	return maior;
}

int busca_menor_vint(int vetor[], int inicio, int fim){
	
	int menor = vetor[inicio];
	
	for(int i = inicio + 1; i < fim; i++)
		if(vetor[i] < menor)
			menor = vetor[i];
	
	return menor;
}

float busca_menor_vfloat(float vetor[], int inicio, int fim){
	
	float menor = vetor[inicio];
	
	for(int i = inicio + 1; i < fim; i++)
		if(vetor[i] < menor)
			menor = vetor[i];
	
	return menor;
}

double busca_menor_vdouble(double vetor[], int inicio, int fim){
	
	double menor = vetor[inicio];
	
	for(int i = inicio + 1; i < fim; i++)
		if(vetor[i] < menor)
			menor = vetor[i];
	
	return menor;
}

int pertence_vint(int vetor_int[], int num_elem, int valor_procurado){
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_int[m]) return 1;
        if(valor_procurado < vetor_int[m]) f = m - 1;
        else i = m + 1;
    }
    
    return 0;
}

int pertence_vfloat(float vetor_float[], int num_elem, float valor_procurado){
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_float[m]) return 1;
        if(valor_procurado < vetor_float[m]) f = m - 1;
        else i = m + 1;
    }
    
    return 0;
}

int pertence_vdouble(double vetor_float[], int num_elem, double valor_procurado){
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_float[m]) return 1;
        if(valor_procurado < vetor_float[m]) f = m - 1;
        else i = m + 1;
    }
    
    return 0;
}

int busca_bin_vint(int vetor_int[], int num_elem, int valor_procurado, int condicao){
	if(condicao != 0)
		if(pertence_vint(vetor_int, num_elem, valor_procurado) == 0) return -1;
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_int[m]) return m;
        if(valor_procurado < vetor_int[m]) f = m - 1;
        else i = m + 1;
    }
    
}

int busca_bin_vfloat(float vetor_float[], int num_elem, float valor_procurado, int condicao){
	
	if(condicao != 0)
		if(pertence_vfloat(vetor_float, num_elem, valor_procurado) == 0) return -1;
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_float[m]) return m;
        if(valor_procurado < vetor_float[m]) f = m - 1;
        else i = m + 1;
    }
    
}

int busca_bin_vdouble(double vetor_double[], int num_elem, double valor_procurado, int condicao){
	
	if(condicao != 0)
		if(pertence_vdouble(vetor_double, num_elem, valor_procurado) == 0) return -1;
    
    int i = 0, f = num_elem - 1, m;
    
    while(i <= f){
        m = (i + f) / 2;
        if(valor_procurado == vetor_double[m]) return m;
        if(valor_procurado < vetor_double[m]) f = m - 1;
        else i = m + 1;
    }
    
}