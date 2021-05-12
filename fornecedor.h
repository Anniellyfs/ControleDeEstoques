//ASSINATURA MENU FORNECEDOR
char menuFornecedor(void);
void navegacaoFornecedor(void);
void cadastrarFornecedor(void);
void altualizarFornecedor(void);
void pesquisarFornecedor(void);
void excluirFornecedor(void);

//ESTRUTURA FORNECEDOR
typedef struct fornecedor Fornecedor;

struct fornecedor{
  char data[10];
  int cnpj;
  char fornecedor[30];
  char cidade[30];
  char estado[2];        
};
