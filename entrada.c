//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entrada.h"

typedef struct entrada Entrada;

char menuEntrada(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*                MENU ENTRADA                *\n");
  printf("*              ================              *\n");
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


void navegacaoEntrada(void){
    char op;
    system("cls || clear");
    do{
      op = menuEntrada();
        switch (op)
        {
        case '1':
            cadastrarEntrada();
            break;
        
        case '2':
            altualizarEntrada();
            break;

        case '3':
            pesquisarEntrada();
            break;
        
        case '4':
            excluirEntrada();
            break;

        }
    }while(op != '0');
    getchar();
}


void cadastrarEntrada(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             CADASTRAR ENTRADA              *\n");
  printf("*            ====================            *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    Data:                       |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor:                 |     *\n");
  printf("*     |    Produto:                    |     *\n");
  printf("*     |    Qtde:                       |     *\n"); 
  printf("*     |    Preco:                      |     *\n");
  printf("*     |    Total:                      |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void altualizarEntrada(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             ATUALIZAR ENTRADA              *\n");
  printf("*            ===================             *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    Data:                       |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor:                 |     *\n");
  printf("*     |    Produto:                    |     *\n");
  printf("*     |    Qtde:                       |     *\n"); 
  printf("*     |    Preco:                      |     *\n");
  printf("*     |    Total:                      |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void pesquisarEntrada(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             PESQUISAR ENTRADA              *\n");
  printf("*            ===================             *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor                  |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void excluirEntrada(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*              EXCLUIR ENTRADA               *\n");
  printf("*             =================              *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor                  |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}
 