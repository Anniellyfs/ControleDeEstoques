//ASSINATURA MENU CLIENTE
char menuCliente(void);
void navegacaoCliente(void);
void cadastrarCliente(void);
void altualizarCliente(void);
void pesquisarCliente(void);
void excluirCliente(void);

//ESTRUTURA CLIENTE
typedef struct cliente Cliente;

struct cliente{
  char data[10];
  int cnpj;
  char cliente[30];
  char cidade[30];
  char estado[2];        
};