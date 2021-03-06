//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "saida.h"

typedef struct saida Saida;

char menuSaida(void){
  char op;
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*                 MENU SAIDA                 *\n");
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
  scanf("%s", &op);
  getchar();
return op;
}


void navegacaoSaida(void){
    char op;
    system("cls || clear");
    do{
      op = menuSaida();
        switch (op)
        {
        case '1':
            cadastrarSaida();
            break;
        
        case '2':
            altualizarSaida();
            break;

        case '3':
            pesquisarSaida();
            break;
        
        case '4':
            excluirSaida();
            break;

        }
    }while(op != '0');
    getchar();

}


void cadastrarSaida(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*              CADASTRAR SAIDA               *\n");
  printf("*             ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨              *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    Data:                       |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
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

void altualizarSaida(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*              ATUALIZAR SAIDA               *\n");
  printf("*             ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨              *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    Data:                       |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
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

void pesquisarSaida(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*              PESQUISAR SAIDA               *\n");
  printf("*             ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨              *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}

void excluirSaida(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*               EXCLUIR SAIDA                *\n");
  printf("*              ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨               *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    CNPJ:                       |     *\n");
  printf("*     |    Cliente:                    |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  getchar();
}
 