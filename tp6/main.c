#include <stdio.h>
#include <stdlib.h>
#include "libpilha.h"
#define N 255

int verifica_expressao (char* str)
{
	/* Declara variáveis e inicializa pilha */
	int i;
	struct pilha p;
	inicializar_pilha(&p, N);

	/* Itera os elementos da string */
	for (i = 0; str[i+1] != '\0'; i++)
	{
		/* Se for caracter de abertura, insere na pilha */
		if ((str[i] == '(') || (str[i] == '[') || (str[i] == '{'))
			push(&p, str[i]);

		/* Se for caracter de fechamento, remove da pilha */
		else if (str[i] == ')')
		{
			if (pop(&p) != '(')
				return 0;
		}
		else if (str[i] == ']')
		{
			if (pop(&p) != '[')
				return 0;
		}
		else if (str[i] == '}')
		{
			if (pop(&p) != '{')
				return 0;
		}

		/* Se for qualquer outro caracter, retorna 0 */
		else
			return 0;
	}

	/* Testa se a pilha está vazia */
	if (pilha_vazia(p))
		return 1;
	return 0;
}

int main()
{
	/* Aloca memória em uma string e lê seu conteúdo */
	char* str = malloc (sizeof(char) * N);
	fgets (str, N, stdin);

	printf("%d\n", verifica_expressao(str));

	return 0;
}