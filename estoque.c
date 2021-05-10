//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"


char menuEstoque(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*                MENU ESTOQUE                *\n");
  printf("*               ==============               *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |       [1]  Cadastrar           |     *\n");
  printf("*     |       [2]  Atualizar           |     *\n");
  printf("*     |       [3]  Pesquisar           |     *\n");
  printf("*     |       [4]  Excluir             |     *\n");
  printf("*     |                                |     *\n"); 
  printf("*     |       [0]  Sair                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  scanf("%s", op);
  getchar();
return op;
}


void navegacaoEstoque(void){
    char op;
    
    do{
        op = menuEstoque();
        switch (op)
        {
        case '1':
            cadastrarEstoque();
            break;
        
        case '2':
            altualizarEstoque();
            break;

        case '3':
            pesquisarEstoque();
            break;
        
        case '4':
            excluirEstoque();
            break;

        default:
            printf("A OPCAO DIGITADA EH INVALIDA!");
            printf("Digite novamente!");
            break;
        }
    }while(op != '0');
    getchar();

}


void cadastrarEstoque(void){
    printf("EM DESENVOLVIMENTO!");
}

void altualizarEstoque(void){
    printf("EM DESENVOLVIMENTO!");
}

void pesquisarEstoque(void){
    printf("EM DESENVOLVIMENTO!");
}

void excluirEstoque(void){
    printf("EM DESENVOLVIMENTO!");
}
 