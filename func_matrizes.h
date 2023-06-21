#include <stdio.h>
#include <stdlib.h>

void exibir_mint(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++)
			printf("%4d ", matriz[i][j]);
		printf("\n");
	}
}

void exibir_mfloat(float **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++)
			printf("%4f ", matriz[i][j]);
		printf("\n");
	}
}

void exibir_mdouble(double **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++)
			printf("%4g ", matriz[i][j]);
		printf("\n");
	}
}

int **matriz_int(int linhas, int colunas){
	
	int **matriz = malloc(linhas * sizeof(int *));
	
	for(int i = 0; i < linhas; i++)
		matriz[i] = malloc(colunas * sizeof(int));
	
	return matriz;
}

float **matriz_float(int linhas, int colunas){
	
	float **matriz = malloc(linhas * sizeof(float *));
	
	for(int i = 0; i < linhas; i++)
		matriz[i] = malloc(colunas * sizeof(float));
	
	return matriz;
}

double **matriz_double(int linhas, int colunas){
	
	double **matriz = malloc(linhas * sizeof(double *));
	
	for(int i = 0; i < linhas; i++)
		matriz[i] = malloc(colunas * sizeof(double));
	
	return matriz;
}

void preencher_mint(int **matriz, int linhas, int colunasn int valor){
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			matriz[i][j] = valor;
}

void preencher_mfloat(float **matriz, int linhas, int colunas, float valor){
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			matriz[i][j] = valor;
}

void preencher_mdouble(double **matriz, int linhas, int colunas, double valor){
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			matriz[i][j] = valor;
}

void ordenar_mint(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas * colunas; i++){
        for(int j = 0; j < linhas * colunas - i - 1; j++){
			
			int lin1 = j / colunas, lin2 = (j + 1) / colunas;
			int col1 = j % colunas, col2 = (j + 1) % colunas;
			
			
            if(matriz[lin1][col1] > matriz[lin2][col2]){
                int x = matriz[lin1][col1];
                matriz[lin1][col1] = matriz[lin2][col2];
                matriz[lin2][col2] = x;
            }
        }
    }
}

void ordenar_mfloat(float **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas * colunas; i++){
        for(int j = 0; j < linhas * colunas - i - 1; j++){
			
			int lin1 = j / colunas, lin2 = (j + 1) / colunas;
			int col1 = j % colunas, col2 = (j + 1) % colunas;
			
			
            if(matriz[lin1][col1] > matriz[lin2][col2]){
                float x = matriz[lin1][col1];
                matriz[lin1][col1] = matriz[lin2][col2];
                matriz[lin2][col2] = x;
            }
        }
    }
}

void ordenar_mdouble(double **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas * colunas; i++){
        for(int j = 0; j < linhas * colunas - i - 1; j++){
			
			int lin1 = j / colunas, lin2 = (j + 1) / colunas;
			int col1 = j % colunas, col2 = (j + 1) % colunas;
			
			
            if(matriz[lin1][col1] > matriz[lin2][col2]){
                double x = matriz[lin1][col1];
                matriz[lin1][col1] = matriz[lin2][col2];
                matriz[lin2][col2] = x;
            }
        }
    }
}

void ordenar_linhas_mint(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			for(int k = 0; k < colunas - j - 1; k++){
				if(matriz[i][k] > matriz[i][k + 1]){
					int x = matriz[i][k];
					matriz[i][k] = matriz[i][k + 1];
					matriz[i][k + 1] = x;
				}
			}
		}
	}
}

void ordenar_linhas_mfloat(float **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			for(int k = 0; k < colunas - j - 1; k++){
				if(matriz[i][k] > matriz[i][k + 1]){
					float x = matriz[i][k];
					matriz[i][k] = matriz[i][k + 1];
					matriz[i][k + 1] = x;
				}
			}
		}
	}
}

void ordenar_linhas_mdouble(double **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			for(int k = 0; k < colunas - j - 1; k++){
				if(matriz[i][k] > matriz[i][k + 1]){
					double x = matriz[i][k];
					matriz[i][k] = matriz[i][k + 1];
					matriz[i][k + 1] = x;
				}
			}
		}
	}
}

void ordenar_colunas_mint(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < colunas; i++){
		for(int j = 0; j < linhas; j++){
			for(int k = 0; k < linhas - j - 1; k++){
				if(matriz[k][i] > matriz[k + 1][i]){
					int x = matriz[k][i];
					matriz[k][i] = matriz[k + 1][i];
					matriz[k + 1][i] = x;
				}
			}
		}
	}
}

void ordenar_colunas_mfloat(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < colunas; i++){
		for(int j = 0; j < linhas; j++){
			for(int k = 0; k < linhas - j - 1; k++){
				if(matriz[k][i] > matriz[k + 1][i]){
					float x = matriz[k][i];
					matriz[k][i] = matriz[k + 1][i];
					matriz[k + 1][i] = x;
				}
			}
		}
	}
}

void ordenar_colunas_mdouble(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < colunas; i++){
		for(int j = 0; j < linhas; j++){
			for(int k = 0; k < linhas - j - 1; k++){
				if(matriz[k][i] > matriz[k + 1][i]){
					double x = matriz[k][i];
					matriz[k][i] = matriz[k + 1][i];
					matriz[k + 1][i] = x;
				}
			}
		}
	}
}


int busca_maior_mint(int **matriz, int linhas, int colunas){
	int maior = matriz[0][0];
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			if(matriz[i][j] > maior)
				maior = matriz[i][j];
	
	return maior;
}

float busca_maior_mfloat(float **matriz, int linhas, int colunas){
	float maior = matriz[0][0];
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			if(matriz[i][j] > maior)
				maior = matriz[i][j];
	
	return maior;
}

double busca_maior_mdouble(double **matriz, int linhas, int colunas){
	double maior = matriz[0][0];
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			if(matriz[i][j] > maior)
				maior = matriz[i][j];
	
	return maior;
}

int busca_menor_mint(int **matriz, int linhas, int colunas){
	int meno = matriz[0][0];
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			if(matriz[i][j] < menor)
				menor = matriz[i][j];
	
	return menor;
}

float busca_menor_mfloat(float **matriz, int linhas, int colunas){
	float menor = matriz[0][0];
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			if(matriz[i][j] < menor)
				menor = matriz[i][j];
	
	return menor;
}

double busca_menor_mdouble(double **matriz, int linhas, int colunas){
	double menor = matriz[0][0];
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			if(matriz[i][j] < menor)
				menor = matriz[i][j];
	
	return menor;
}

