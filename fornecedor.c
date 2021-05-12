//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fornecedor.h"


//MENU PRINCIPAL
char menuFornecedor(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*              MENU FORNECEDOR               *\n");
  printf("*             =================              *\n");
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


void navegacaoFornecedor(void){
    char op;
    system("cls || clear");
    do{
        op = menuFornecedor();
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

        }
    }while(op != '0');
    getchar();

}


void cadastrarFornecedor(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*            CADASTRAR FORNECEDOR            *\n");
  printf("*            ====================            *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Data de cadastro:           |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor:                 |     *\n");
  printf("*     |    Cidade:                     |     *\n");
  printf("*     |    Estado:                     |     *\n"); 
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void altualizarFornecedor(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*            ATUALIZAR FORNECEDOR            *\n");
  printf("*            ====================            *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Data de cadastro:           |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor:                 |     *\n");
  printf("*     |    Cidade:                     |     *\n");
  printf("*     |    Estado:                     |     *\n"); 
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void pesquisarFornecedor(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*            PESQUISAR FORNECEDOR            *\n");
  printf("*            ====================            *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor:                 |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void excluirFornecedor(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*             EXCLUIR FORNECEDOR             *\n");
  printf("*             ===================            *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Fornecedor:                 |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}
 