#include <stdio.h>
#include <stdlib.h>
#include "libpilha.h"
#define TAM 255

int verifica_expressao (char* str, pilha_t* p)
{
	int i;

	/* Itera os elementos da string*/
	for (i = 0; str[i] != '\n'; i++)
	{
		/* Se for caracter de abertura, insere na pilha */
		if ((str[i] == '(') || (str[i] == '[') || (str[i] == '{'))
			push(p, str[i]);

		/* Se for caracter de fechamento, remove da pilha
		Caso não faça par com o caracter de abertura,
		retorna 0 para a main */
		else if (str[i] == ')')
		{
			if (pop(p) != '(')
				return 0;
		}
		else if (str[i] == ']')
		{
			if (pop(p) != '[')
				return 0;
		}
		else if (str[i] == '}')
		{
			if (pop(p) != '{')
				return 0;
		}

		/* Se for qualquer outro caracter, retorna 0 */
		else
			return 0;
	}

	/* Retorna 1 caso a pilha esteja vazia */
	if (pilha_vazia(p))
		return 1;
	return 0;}

int main()
{
	/* Aloca memória em uma string e lê seu conteúdo */
	char* str = malloc (sizeof(char) * TAM);
	/* if (str == NULL)
		return 1; */
	fgets (str, TAM, stdin);

	/* Inicializa a pilha e verifica a expressão lida */
	pilha_t* p = inicializa_pilha(TAM);
	printf("%d\n", verifica_expressao(str, p));

	/* Libera a memória alocada dinamicamente */
	free(str);
	destroi_pilha(p);

	return 0;
}
