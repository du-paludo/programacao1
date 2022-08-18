#ifndef LIBPILHA_H_
#define LIBPILHA_H_

struct pilha
{
	char* exp;
	int topo, tam;
};

void inicializar_pilha (struct pilha* p, int n);

int pilha_vazia (struct pilha p);

int pilha_unitaria (struct pilha p);

void push (struct pilha* p, char x);

int pop (struct pilha* p);

int topo (struct pilha p);

#endif
