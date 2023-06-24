#include <stdio.h>
#include <stdlib.h>

int **matriz_int(int linhas, int colunas){
	
	int **matriz = malloc(linhas * sizeof(int *));
	
	for(int i = 0; i < linhas; i++)
		matriz[i] = malloc(colunas * sizeof(int));
	
	return matriz;
}

void zerar_mint(int **matriz, int linhas, int colunas){
	
	for(int i = 0; i < linhas; i++)
		for(int j = 0; j < colunas; j++)
			matriz[i][j] = 0;
}

int main(){

    int sal, tun;
    int** grafo;

    scanf("%d %d", &sal, &tun);

    grafo = matriz_int(sal, sal);
    zerar_mint(grafo, sal, sal);


    for(int i = 0; i < tun; i++){

        int x, y;
        scanf("%d %d", &x, &y);
        grafo[x - 1][y - 1] = 1;
        grafo[y - 1][x - 1] = 1;
    }

    int pas, pos = 0;
    scanf("%d", &pas);

    for(int i = 0; i < pas; i++){
        int num, is_pos = 1;
        scanf("%d", &num);

        int pas_pos[num];

        for(int j = 0; j < num; j++){
            scanf("%d", &pas_pos[j]);
            pas_pos[j]--;
        }
            
        for(int j = 0; j < num - 1; j++){
            if(grafo[pas_pos[j]][pas_pos[j + 1]] == 0){
                is_pos = 0;
                break;
            }
        }

        if(is_pos)
            pos++;

    }

    printf("%d", pos);

    return 0;

}