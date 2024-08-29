struct musica{
char titulo[256];
char artista[256];
char letra[256];
int codigo;
int execucoes;
};

struct nodo{
struct nodo *prox;
struct musica *info;
};

struct desc_Pilha{
struct nodo *Pilha;
int tamanho;
};

struct desc_Pilha *criapilha();
struct nodo *crianodo();
struct desc_Pilha *push(struct desc_Pilha *minhapilha, struct nodo *meuelemento);
struct desc_Pilha *pop(struct desc_Pilha *minhapilha);
struct desc_Pilha *top(struct desc_Pilha *minhapilha);
struct desc_Pilha *empty(struct desc_Pilha *minhapilha);
void imprime(struct desc_Pilha *minhapilha);

