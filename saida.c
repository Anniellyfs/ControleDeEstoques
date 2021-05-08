//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include "saida.h"


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
  scanf("%s", op);
  getchar();
return op;
}


void navegacaoSaida(void){
    char op;
    op = menuSaida();
    do{
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

        default:
            printf("A OPCAO DIGITADA EH INVALIDA!");
            printf("Digite novamente!");
            break;
        }
    }while(op != '0');
    getchar();
    return op;
}


void cadastrarSaida(void){
    printf("EM DESENVOLVIMENTO!");
}

void altualizarSaida(void){
    printf("EM DESENVOLVIMENTO!");
}

void pesquisarSaida(void){
    printf("EM DESENVOLVIMENTO!");
}

void excluirSaida(void){
    printf("EM DESENVOLVIMENTO!");
}
 