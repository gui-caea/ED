
#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int dia, mes, ano;
}Data;

typedef struct {
	char nome[50];
	Data data;
}Pessoa;

typedef struct no{
	Pessoa p;
	struct no *proximo;
}No;


Pessoa ler_pessoa(){
 Pessoa p;
 scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
 return p;
}
              

void imprimir_pessoa(Pessoa p){
printf("\nNome: %s \nData: %2d/%2d/%4d \n", p.nome, p.data.dia, p.data.mes, p.data.ano); 
}

//funcao para operacap push
No* empilhar(No *topo){
	No *novo= malloc(sizeof(No));
	if(novo){
		novo->p = ler_pessoa();
		novo->proximo = topo;
		return novo;
	}
	else 
	printf("\n Erro na alocação de memoria\n");
	return NULL;
}

No* desempilhar (No **topo){
	if(*topo !=NULL){
		No *remover = *topo;
		*topo = remover ->proximo;
		return remover;				
	}else printf("\n Pilha vazia\n");
 
	return NULL;
	
}

void imprimir_pilha(No *topo){
	printf("\n------------PILHA-------------\n");
	while (topo){
		imprimir_pessoa(topo->p);
		topo = topo ->proximo;
	}
	printf("\n------------FIM PILHA-------------\n");
}

int main() {
	No *remover, *topo = NULL;
	int opcao;
	
	do{ printf("\n 0- Sair \n 1- Empilhar \n 2- Desempilhar \n 3- Imprimir\n ");
	scanf("%d", &opcao);
	getchar();
	switch(opcao){
		case 1:
			topo = empilhar(topo);
		break;
		
		case 2:
			remover = desempilhar(&topo);
			if(remover){
				printf("\n elemento removido com sucesso\n");
				imprimir_pessoa(remover->p);
			}
			else
			printf("\n sem no a remover\n");
		
		break;
		
		case 3:
				imprimir_pilha(topo);
		break;
		
		default:
			if(opcao!=0){
				printf("\n Opcao invalida!\n");
			}
		
	}
	
	}while(opcao!=0); 
	return 0;
}