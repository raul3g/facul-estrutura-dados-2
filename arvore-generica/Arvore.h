typedef struct arvore Arvore;

Arvore * criar();
void destruir( Arvore * arv );

void limpar( Arvore * arv );
int contar_nos(Arvore * arv);
int altura(Arvore * arv);

void imprimir_nivel(Arvore * arv, int nivel);

int contar_folhas(Arvore * arv);
int contar_folhas_nivel(Arvore * arv, int nivel);


