#include <stdio.h>
#define TAM 10

int main()
{
	int vetor[TAM];
	char abc[]={'a', 'b', 'c', 'd'};
	void *p;
	int x;

	/* p aponta para vetor */
	p = (void*)vetor;

	/* escrevendo caracteres no vetor usando p */
	for (x = 0; x < TAM * 4; x++)
	{
		*(char*)p = abc[x % 4];
		p = (char*)p + 1;
	}

	/* apontando novamente para o inicio do vetor */
	p = (void*)vetor;

	/* imprimindo p como um vetor de inteiros */
	for (x = 0; x < TAM; x++)
	{
		printf("(%p) vetor[%d] = %d \n", p, x, *(int*)p);
		p = (int*)p + 1;
	}
	printf("\n");

	/* imprimindo p como um vetor de caracteres */

	p = (void*)vetor;
	for (x = 0; x < TAM; x++)
	{
		printf("(%p) vetor[%d] = %c \n", p, x, *(char*)p);
		p = (char*)p + 1;
	}
	printf("\n");

	return 0;
}
