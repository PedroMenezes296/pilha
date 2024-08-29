#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arquivo.h"

int main(void) {
  int op = 0;
  int aux=0;
  struct desc_Pilha *novaPilha = NULL;
  struct nodo *novonodo = NULL;
  while(1){
   printf("\n================Menu============\n");
   printf("1.CriaPilha\n2.insere\n3.remove\n4.Topo da pilha\n5.Consulta de lista\n6.Imprime\n7.Sair");
   printf("\n================================\n");
   printf("Escolha uma opcao:");
   setbuf(stdin, NULL);
   scanf("%d", & op);
    switch(op){
      case 1:
       printf("Pilha criada com sucesso");
       novaPilha=criapilha();
       aux++;
       
      break;

      case 2:
      if(aux==0){
		  printf("Crie a pilha primeiro");
		  }
       printf("Inserido na pilha\n");
       novonodo = crianodo();  
       novaPilha=push(novaPilha, novonodo);
      break;

      case 3:
       if(novaPilha->Pilha==NULL){
         printf("Crie uma Pilha primeiro!\n");
         break;
       }
        printf("Removendo da pilha\n");
        novaPilha=pop(novaPilha);
      break;

      case 4:
       if(novaPilha->Pilha==NULL){
         printf("Crie uma Pilha primeiro!\n");
         break;
       }
        top(novaPilha);
      break;

      case 5:
        empty(novaPilha);
      break;
      
      case 6:
       if(novaPilha->Pilha==NULL){
         printf("Crie uma Pilha primeiro!\n");
         break;
       }
       printf("Imprimindo\n");
       imprime(novaPilha);
      break;
      case 7:
      printf("\n Saindo do programa \n");
      return 0;
      break;
      default:
      printf("\nOpcao Inválida\n");
      break;
    }
}
  return 0;
}
