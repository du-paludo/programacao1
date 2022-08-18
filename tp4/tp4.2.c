#include <stdio.h>

void troca_nums (int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void troca_ponteiros (char **x, char **y) /* Declara as variáveis x e y como ponteiros para ponteiro, por meio dos asteriscos duplos */
{
	char *tmp;
	tmp = *x; /* Associa ao ponteiro tmp o endereço a que x aponta */
	*x = *y; /* Troca o endereço a que x aponta (s1) com ao que y aponta (s2) */
	*y = tmp; /* Troca o endereço a que y aponta pelo armazenado no ponteiro tmp (s1) */
}

int main()
{
	int a, b;
	char *s1, *s2;
	a = 3;
	b = 4;
	troca_nums (&a, &b);
	printf("a eh %d\n", a);
	printf("b eh %d\n", b);
	s1 = "Imprimir isso primeiro";
	s2 = "Imprimir isso depois";
	troca_ponteiros (&s1, &s2); /* Utiliza como parâmetros para a função os endereços das strings s1 e s2 */
	printf("s1 eh %s\n", s1);
	printf("s2 eh %s\n", s2);
	return 0;
}
