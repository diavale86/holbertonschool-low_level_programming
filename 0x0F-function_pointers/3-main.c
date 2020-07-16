#include "3-calc.h"

/**
 *main - main
 *@ac: num 1
 *@av: num 2
 *Return: void
 */

int main(int ac, char **av)
{
	int (*operadorf)(int, int);
	int num1, num2, resultado;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operadorf = get_op_func(av[2]);
	if (operadorf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	resultado = operadorf(num1, num2);
	printf("%d\n", resultado);
	return (0);
}
