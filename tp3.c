#include <stdio.h>

int teste;

int verifica_primo (int n)
{
	int i;
	for (i = 2; i <= n; ++i)
	{
		if (n % i == 0)
			teste = 0;
	}
}

int main()
{
	int n;
	teste = 1;
	scanf("%d", &n);
	verifica_primo(n);
	if (teste == 0)
		printf("O número %d é primo.", n);
	else
		printf("O número %d não é primo.", n);
	return 0;
}
