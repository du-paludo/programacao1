#include <stdlib.h>
#include "libpilha.h"

pilha_t* inicializa_pilha(int nelem)
{
	pilha_t* pilha = malloc(sizeof(pilha_t));
	if (pilha == NULL)
		return NULL;
	pilha->elems = malloc(sizeof(char) * nelem);
	if (pilha->elems == NULL)
		return NULL;
	pilha->topo = -1;
	pilha->nelem = nelem;
	return pilha;
}

int push(pilha_t* pilha, char elem)
{
	if (pilha->topo == pilha->nelem-1)
		return -1;
	pilha->topo++;
	pilha->elems[pilha->topo] = elem;
	return pilha->nelem;
}

char pop(pilha_t* pilha)
{
	if (pilha_vazia(pilha))
		return 0;
	pilha->topo--;
	return pilha->elems[pilha->topo+1];
}

char topo(pilha_t* pilha)
{
	return pilha->elems[pilha->topo];
}

int pilha_vazia(pilha_t* pilha)
{
	if (pilha->topo == -1)
		return 1;
	return 0;
}

void destroi_pilha(pilha_t* pilha)
{
	free(pilha->elems);
	free(pilha);
	pilha = NULL;
}