#include <stdio.h>

int main()
{
	double d = 3;
	int i = 5;
	char c = 'k';

	double *pd = &d;
	int *pi = &i;
	char *pc = &c;

	printf("O endereço de char %c é %p\n", 'c', pc);
	printf("O endereço de int %c é %p\n", 'i', pi);
	printf("O endereço de double %c é %p\n", 'd', pd);
	printf("O endereço de char* %s é %p\n", "pc", &pc);
	printf("O endereço de int* %s é %p\n", "pi", &pi);
	printf("O endereço de double* %s é %p\n", "pd", pd);

	printf("O valor de char %c é %c\n", 'c', c);
	printf("O valor de int %c é %d\n", 'i', i);
	printf("O valor de double %c é %f\n", 'd', d);
	printf("O valor de char* %s é %p\n", "pc", pc);
	printf("O valor de int* %s é %p\n", "pi", pi);
	printf("O valor de double* %s é %p\n", "pd", pd);

	printf("O tamanho de char é %ld bytes\n", sizeof(char));
	printf("O tamanho de int é %ld bytes\n", sizeof(int));
	printf("O tamanho de double é %ld bytes\n", sizeof(double));
	printf("O tamanho de char* é %ld bytes\n", sizeof(pc));
	printf("O tamanho de int* é %ld bytes\n", sizeof(pi));
	printf("O tamanho de double* é %ld bytes\n", sizeof(pd));

	return 0;
}
