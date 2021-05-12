//ASSINATURA MENU SAIDA
char menuSaida(void);
void navegacaoSaida(void);
void cadastrarSaida(void);
void altualizarSaida(void);
void pesquisarSaida(void);
void excluirSaida(void);

//ESTRUTURA SAIDA
typedef struct saida Saida;

struct saida{
  char data[10];
  int cnpj;
  char cliente[30];
  char codigo[30];
  char produto[30];        
  int qtde;
  float preco;
  float total;
};