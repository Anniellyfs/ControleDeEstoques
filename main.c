/*************************************************/
/*  Universidade Federal do Rio Grande do Norte  */
/*      Centro de Ensino Superior do Seridó      */
/*   Departamento de Computação e Tecnologia     */
/*       Disciplina DCT1106 -- Programação       */
/*      Centro de Ensino Superior do Serido      */
/*   Departamento de Computacao e Tecnologia     */
/*       Disciplina DCT1106 -- Programacao       */
/*    Projeto Sistema de Controle de Estoques    */
/*     Developed by @anniellyfs - Jan, 2021      */
/*     Developed by @           - Jan, 2021      */
/*************************************************/

//BIBLIOTECAS NECESSÁRIAS PARA O PROGRAMA
#include <stdio.h>
#include <stdlib.h>
#include "assinPrincipalEsobre.h"
#include "cliente.h"
#include "entrada.h"
#include "estoque.h"
#include "fornecedor.h"
#include "saida.h"


//FUNÇÃO PRINCIPAL
int main(void) {
  char op;
  system("cls || clear");
  do{
    op = menuPrincipal();
    switch (op)
    {
      case '1':
        menuFornecedor();
        break;
      
      case '2':
        menuCliente();
        break;

      case '3':
        menuEntrada();
        break;
      
      case '4':
        menuSaida();
        break;
      
      case '5':
        menuEstoque();
        break;

      case '6':
        menuSobre();
        break;      

      default:
        printf("A OPCAO DIGITADA EH INVALIDA!");
        printf("Digite novamente!");
        break;
    }

  }while (op != '0');
return 0;
}


//MENU PRINCIPAL
char menuPrincipal(void){
  char op;
  printf("**********************************************\n");
  printf("*                                            *\n");
  printf("*               MENU PRINCIPAL               *\n");
  printf("*              ================              *\n");
  printf("*     __________________________________     *\n");
  printf("*     |                                |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |       [1]  Fornecedores        |     *\n");
  printf("*     |       [2]  Clientes            |     *\n");
  printf("*     |       [3]  Entrada             |     *\n");
  printf("*     |       [4]  Saidas              |     *\n");
  printf("*     |       [5]  Estoque             |     *\n"); 
  printf("*     |       [6]  Sobre               |     *\n");
  printf("*     |                                |     *\n");
  printf("*     |________________________________|     *\n");
  printf("*                                            *\n");
  printf("*                                            *\n");
  printf("**********************************************\n");
  scanf("%s", op);
  getchar();
return op;
}

  