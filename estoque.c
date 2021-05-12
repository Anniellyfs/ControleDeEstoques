//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"



void menuEstoque(void){
  system("cls || clear");
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*            CADASTRAR FORNECEDOR            *\n");
  printf("*            ====================            *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |    Codigo:                     |     *\n");
  printf("*     |    Produto:                    |     *\n");
  printf("*     |    Estoque Minimo:             |     *\n");
  printf("*     |    Estoque Maximo:             |     *\n");
  printf("*     |    Estoque:                    |     *\n"); 
  printf("*     |    CMV:                        |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  printf("*    CMV - Custo de Mercadorias Vendidas     *\n");
  getchar();
}