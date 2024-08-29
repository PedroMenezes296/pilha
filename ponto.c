#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arquivo.h"

//case 1
struct desc_Pilha *criapilha(){
 struct desc_Pilha *novodescpilha = (struct desc_Pilha*)malloc(sizeof(struct desc_Pilha));
 novodescpilha->Pilha=NULL;
 novodescpilha->tamanho=0;
 return novodescpilha;
}

//case 2
struct nodo *crianodo(){
  struct nodo *novonodo = (struct nodo*)malloc(sizeof(struct nodo));
  struct musica *novamusica = (struct musica *)malloc(sizeof(struct musica));
  char titulo[256], artista[256], letra[256];
  int codigo=0;
  novonodo->info=NULL;
  novonodo->prox=NULL;
  printf("Insira o titulo:");
  setbuf(stdin, NULL);
  scanf("%s", titulo);
  printf("Insira o artista:");
  setbuf(stdin, NULL);
  scanf("%s", artista);
  printf("Insira a letra:");
  setbuf(stdin, NULL);
  scanf("%s", letra);
  printf("Insira o codigo:");
  setbuf(stdin, NULL);
  scanf("%i", &codigo);
  strcpy(novamusica->titulo, titulo);
  strcpy(novamusica->artista, artista);
  strcpy(novamusica->letra, letra);
  novamusica->codigo=codigo;
  
  
  novonodo->info=novamusica;
  
 return novonodo;
}

struct desc_Pilha *push(struct desc_Pilha *minhapilha, struct nodo *meuelemento){
  if(minhapilha->Pilha==NULL){
    printf("Pilha Vazia inserindo no primeiro elemento");
    minhapilha->Pilha=meuelemento;
    minhapilha->tamanho++;
  }
  else{
    printf("Inserindo em pilha ja alocada");
    meuelemento->prox = minhapilha->Pilha;
    minhapilha->Pilha=meuelemento;
    minhapilha->tamanho++;
  }
  return minhapilha;
}

struct desc_Pilha *pop(struct desc_Pilha *minhapilha){
  if(minhapilha->Pilha==NULL){
  printf("Pilha vazia");
  }
struct nodo *aux=minhapilha->Pilha->prox;
  minhapilha->Pilha=aux;
  minhapilha->tamanho--;
  return minhapilha;
}

//case 4
struct desc_Pilha *top(struct desc_Pilha *minhapilha){
  if(minhapilha->Pilha==NULL){
    printf("Pilha vazia");
     return 0;
  }
 struct nodo *aux=minhapilha->Pilha;
 printf("\n----------------------\n");
 printf("Titulo:%s\n", aux->info->titulo);
 printf("Artista:%s\n", aux->info->artista);
 printf("Letra:%s\n", aux->info->letra);
 printf("Código:%i\n", aux->info->codigo);
 printf("----------------------\n\n");	
 return minhapilha;
}

//case 5
struct desc_Pilha *empty(struct desc_Pilha *minhapilha){
  if(minhapilha->Pilha==NULL){
   printf("\nPilha esta vazia\n");
   return 0;
  }else{
	  printf("\nExistem elementos na pilha\n");
	  
}
return minhapilha;
}

//case 6
void imprime(struct desc_Pilha *minhapilha){
 struct nodo *aux = minhapilha->Pilha;
 if(minhapilha->Pilha==NULL){
  printf("Pilha vazia\n");
  return;
  }
 while (aux!=NULL){
   printf("\n----------------------\n");
   printf("Titulo:%s\n", aux->info->titulo);
   printf("Artista:%s\n", aux->info->artista);
   printf("Letra:%s\n", aux->info->letra);
   printf("Código:%i\n", aux->info->codigo);
   printf("----------------------\n\n");		
   aux=aux->prox;
 }
}
