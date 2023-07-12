#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
	
}No;

typedef struct{
	int tamanho;
	No *inicio;

}Lista;

void new_lista(Lista *lista){
	lista -> tamanho = 0;
	lista -> inicio = NULL;
	
}

void inserir_inicio_lista(Lista *lista, int valor){
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo -> valor = valor;
		novo -> proximo = lista -> inicio;
		lista -> inicio = novo;
		lista -> tamanho++;
	}
}

void inserir_fim_lista(Lista *lista, int valor){
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo -> valor = valor;
		novo -> proximo = NULL;
		
		if(lista -> inicio == NULL){
			novo -> proximo = lista -> inicio;
			lista -> inicio = novo;
		}
		else{
			No *auxiliar = lista -> inicio;
			
			while(auxiliar -> proximo)
				auxiliar = auxiliar -> proximo;
			
			auxiliar -> proximo = novo;
		}
		lista -> tamanho++;
	}
}
//erro
void inserir_meio_lista(Lista *lista, int valor, int anterior){
	No *novo = malloc(sizeof(No));
	
	if(novo){
		novo -> valor = valor;
		
		if(lista -> inicio == NULL){
			novo -> proximo = NULL;
			lista -> inicio = novo;
		}
		else{
			No *auxiliar = lista -> inicio;
			
			while(auxiliar -> proximo && auxiliar -> proximo -> valor != anterior)
				auxiliar = auxiliar -> proximo;
			
			novo -> proximo = auxiliar -> proximo;
			auxiliar -> proximo = novo;
		}
		lista -> tamanho++;
	}
}
//erro
void inserir_posicao_lista(Lista *lista, int valor, int posicao){
	No *novo = malloc(sizeof(No)), *auxiliar = lista -> inicio;
	
	if(novo){
		novo -> valor = valor;
		
		if(lista -> tamanho > posicao){
			for(int i = 0; i < posicao; i++)
				auxiliar = auxiliar -> proximo;
			
			novo -> proximo = auxiliar -> proximo;
			auxiliar -> proximo = novo;
		}
		else
			inserir_fim_lista(lista, valor);
		
		lista -> tamanho++;
	}
}

No *remover_inicio_lista(Lista *lista){
	No *remover = NULL;
	
	if(lista -> inicio){
		remover = lista -> inicio;
		lista -> inicio = lista -> inicio -> proximo;
	}
	
	return remover;
}
//erro
No *remover_fim_lista(Lista *lista){
	No *remover = NULL;
	
	if(lista -> inicio){
		No *auxiliar = lista -> inicio;
		
		while(auxiliar -> proximo)
			auxiliar = auxiliar -> proximo;
		
		remover = auxiliar;
		auxiliar = NULL;
		
	}
	return remover;
}

No *remover_meio_lista(Lista *lista, int valor){
	No *remover = NULL;
	
	if(lista -> inicio){
		No *auxiliar = lista -> inicio;
		
		while(auxiliar -> proximo && auxiliar -> proximo -> valor != valor)
			auxiliar = auxiliar -> proximo;
		
		remover = auxiliar -> proximo;
		auxiliar -> proximo = auxiliar -> proximo -> proximo;
	}
	return remover;
}

void imprimir_lista(Lista *lista){
  No *auxiliar = lista -> inicio;

  printf("\nLista de %d elementos:\n", lista -> tamanho);

  while(auxiliar){
	printf("%d ", auxiliar -> valor);
    auxiliar = auxiliar -> proximo;
  }

  printf("\nFim da lista.\n\n");
}

int main(){
  int opcao, valor, anterior, posicao;
  No *removido = NULL;
  
  Lista *lista = malloc(sizeof(Lista));
  new_lista(lista);

  do{
    printf("\n0. Sair\n1. InserirI\n2. InserirF\n3. InserirM\n4. InserirP\n5. RemoverI\n6. RemoverF\n7. RemoverM\n8. Imprimir\n\n");

    scanf("%d", &opcao);
    switch(opcao){
		case 0:
			printf("\nSaindo...\n\n");
			break;
		case 1:
			printf("\nDigite o valor: ");
			scanf("%d", &valor);
			inserir_inicio_lista(lista, valor);
			printf("\nValor inserido.\n");
			break;
		case 2:
			printf("\nDigite o valor: ");
			scanf("%d", &valor);
			inserir_fim_lista(lista, valor);
			printf("\nValor inserido.\n");
			break;
		case 3:
			printf("\nDigite o valor: ");
			scanf("%d", &valor);
			printf("\nDigite o anterior: ");
			scanf("%d", &anterior);
			inserir_meio_lista(lista, valor, anterior);
			printf("\nValor inserido.\n");
			break;
		case 4:
			printf("\nDigite o valor: ");
			scanf("%d", &valor);
			printf("\nDigite a posicao: ");
			scanf("%d", &posicao);
			inserir_posicao_lista(lista, valor, posicao);
			printf("\nValor inserido.\n");
			break;
		case 5:
			removido = remover_inicio_lista(lista);
			printf("\nValor %d removido\n", removido -> valor);
			free(removido);
			break;
		case 6:
			removido = remover_fim_lista(lista);
			printf("\nValor %d removido\n", removido -> valor);
			free(removido);
			break;
		case 7:
			printf("\nDigite o valor: ");
			scanf("%d", &valor);
			removido = remover_meio_lista(lista, valor);
			printf("\nValor %d removido\n", removido -> valor);
			free(removido);
			break;
		case 8:
			imprimir_lista(lista);
			break;
		default:
			printf("\nOpcao invalida!\n");
			break;
    }
  }	while(opcao != 0);
  
	return 0;
}