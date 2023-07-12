#include <stdio.h>

typedef struct{
	int sup_esq[2];
	int inf_dir[2];
	
}Retangulo;

int contido(Retangulo maior, Retangulo menor){
	
	if((menor.sup_esq[0] > maior.sup_esq[0]) && (menor.inf_dir[0] < maior.inf_dir[0])) //Comparando pontos em x
		if((menor.sup_esq[1] < maior.sup_esq[1]) && (menor.inf_dir[1] > maior.inf_dir[1])) //Comparando pontos em y
			return 1;
		
	return 0;
}


int main(){
	
	int salas;
	scanf("%d", &salas);
	
	Retangulo lista[salas];
	
	int nova = 0;
	
	for(int i = 0; i < salas; i++){
		if(i == 0){
			scanf("%d %d %d %d", &lista[0].sup_esq[0], &lista[0].sup_esq[1], &lista[0].inf_dir[0], &lista[0].inf_dir[1]);
			nova++;
		}
		
		else{
			int estava_contido = 0;
			
			Retangulo nova_sala;
			scanf("%d %d %d %d", &nova_sala.sup_esq[0], &nova_sala.sup_esq[1], &nova_sala.inf_dir[0], &nova_sala.inf_dir[1]);
			
			for(int j = 0; j < nova; j++){
				if(contido(lista[j], nova_sala)){
					lista[j] = nova_sala;
					estava_contido = 1;
					break;
				}
			}
			
			if(estava_contido == 0){
				lista[nova] = nova_sala;
				nova++;
			}
		}
	}
	
	if(nova == 1){
		printf("%d", nova);
		return 0;
	}
	
	printf("%d", nova - 1);
	return 0;
}			