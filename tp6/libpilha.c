#include <stdlib.h>
#include "libpilha.h"

void inicializar_pilha (struct pilha* p, int N)
{
	p->exp = malloc (sizeof(char) * N);
	p->topo = -1;
	p->tam = N;
}

int pilha_vazia (struct pilha p)
{
	if (p.topo == -1)
		return 1;
	return 0;
}

int pilha_cheia (struct pilha p)
{
	if (p.topo == p.tam-1)
		return 1;
	return 0;
}

int pilha_unitaria (struct pilha p)
{
	if (p.topo == 0)
		return 1;
	return 0;
}

void push (struct pilha* p, char x)
{
	if (pilha_cheia(*p))
		return;
	p->topo++;
	p->exp[p->topo] = x;
}

int pop (struct pilha* p)
{
	if (pilha_vazia(*p))
		return -1;
	(p->topo)--;
	return p->exp[p->topo+1];
}

int topo (struct pilha p)
{
	return p.exp[p.topo];
}
