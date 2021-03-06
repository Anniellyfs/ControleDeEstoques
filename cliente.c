//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

typedef struct cliente Cliente;

char menuCliente(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*                MENU CLIENTE                *\n");
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
  scanf("%s", &op);
  getchar();
return op;
}


void navegacaoCliente(void){
  char op;
  system("cls || clear");
  do{
    op = menuCliente();
    switch (op) {
      case '1':
        cadastrarCliente();
        break;
        
      case '2':
        altualizarCliente();
        break;

      case '3':
        pesquisarCliente();
        break;
        
      case '4':
        excluirCliente();
        break;

    }
  }while(op != '0');
}


void cadastrarCliente(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             CADASTRAR CLIENTE              *\n");
  printf("*            ===================             *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Data de cadastro:           |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
  printf("*     |    Cidade:                     |     *\n");
  printf("*     |    Estado:                     |     *\n"); 
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void altualizarCliente(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             ATUALIZAR CLIENTE              *\n");
  printf("*            ===================             *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Data de cadastro:           |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
  printf("*     |    Cidade:                     |     *\n");
  printf("*     |    Estado:                     |     *\n"); 
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void pesquisarCliente(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             PESQUISAR CLIENTE              *\n");
  printf("*            ===================             *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void excluirCliente(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             PESQUISAR CLIENTE              *\n");
  printf("*            ===================             *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}
 