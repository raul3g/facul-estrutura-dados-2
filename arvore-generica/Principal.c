#include <stdio.h>
#include <stdlib.h>
#include "./Arvore.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Arvore * a = criar();
	imprimir(a);
	imprimir_nivel(a, 3);
	printf("\n%d", contar_folhas( a) );
	destruir(a);
	return 0;
}
