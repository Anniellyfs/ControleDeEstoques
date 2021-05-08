//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include "fornecedor.h"


//MENU PRINCIPAL
char menuFornecedor(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*              MENU FORNECEDOR               *\n");
  printf("*                                            *\n");
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


void navegacaoFornecedor(void){
    char op;
    op = menuFornecedor();
    do{
        switch (op)
        {
        case '1':
            cadastrarFornecedor();
            break;
        
        case '2':
            altualizarFornecedor();
            break;

        case '3':
            pesquisarFornecedor();
            break;
        
        case '4':
            excluirFornecedor();
            break;

        default:
            printf("A OPCAO DIGITADA EH INVALIDA!");
            printf("Digite novamente!");
            break;
        }
    }while(op != '0');
    getchar();
    return op;
}


void cadastrarFornecedor(void){
    printf("EM DESENVOLVIMENTO!");
}

void altualizarFornecedor(void){
    printf("EM DESENVOLVIMENTO!");
}

void pesquisarFornecedor(void){
    printf("EM DESENVOLVIMENTO!");
}

void excluirFornecedor(void){
    printf("EM DESENVOLVIMENTO!");
}
 