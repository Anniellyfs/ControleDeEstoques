//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include "cliente.h"


char menuCliente(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*                MENU CLIENTE                *\n");
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


void navegacaoCliente(void){
    char op;
    op = menuCliente();
    do{
        switch (op)
        {
        case '1':
            cadastrarCliente();
            break;
        
        case '2':
            altualizarcliente();
            break;

        case '3':
            pesquisarCliente();
            break;
        
        case '4':
            excluirCliente();
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


void cadastrarCliente(void){
    printf("EM DESENVOLVIMENTO!");
}

void altualizarCliente(void){
    printf("EM DESENVOLVIMENTO!");
}

void pesquisarCliente(void){
    printf("EM DESENVOLVIMENTO!");
}

void excluirCliente(void){
    printf("EM DESENVOLVIMENTO!");
}
 