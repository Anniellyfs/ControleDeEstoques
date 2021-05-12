//ASSINATURA MENU ENTRADA
char menuEntrada(void);
void navegacaoEntrada(void);
void cadastrarEntrada(void);
void altualizarEntrada(void);
void pesquisarEntrada(void);
void excluirEntrada(void);

//ESTRUTURA ENTRADA
typedef struct entrada Entrada;

struct entrada{
  char data[10];
  int cnpj;
  char fornecedor[30];
  char codigo[30];
  char produto[30];        
  int qtde;
  float preco;
  float total;
};