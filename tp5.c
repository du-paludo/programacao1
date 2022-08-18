#include <stdio.h>
#include <stdlib.h>
#define MAX 200

int le_vetor (int v[])
{
	/* Le o vetor ate atingir o max ou o -1 ser lido */

	int tam = 0;
	do
	{
		scanf("%d", &v[tam]);
		tam++;
	}
	while (v[tam-1] != -1 && tam < MAX);

	/* Retorna o tamanho do vetor */

	return tam;
}

void imprime_vetor (int v[])
{
	int i;
	for (i = 0; v[i] != -1; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int* une_vetores (int v1[], int v2[], int tam3)
{
	/* Declara um ponteiro para um vetor de inteiros v3 e aloca memoria */

	int* v3 = malloc(tam3 * sizeof(int));

	/* Copia os elementos dos vetores v1 e v2 para v3 */

	int i, j = 0;
	for (i = 0; v1[i] != -1; i++)
	{
		v3[j] = v1[i];
		j++;
	}
	for (i = 0; v2[i] != -1; i++)
	{
		v3[j] = v2[i];
		j++;
	}
	v3[j] = -1;
	return v3;
}

int main ()
{
	/* Declara vetores e inicializa variaveis */

	int v1[MAX], v2[MAX];
	int tam1 = le_vetor(v1);
	int tam2 = le_vetor(v2);
	int tam3 = tam1 + tam2 - 1;

	/* Une os vetores 1 e 2 e imprime o vetor resultante  */

	int* v3 = une_vetores(v1, v2, tam3);
	imprime_vetor(v3);

	/* Libera a memoria alocada dinamicamente, aponta o vetor para o vazio
	e retorna status de saida */

	free(v3);
	v3 = NULL;
	return 0;
}
