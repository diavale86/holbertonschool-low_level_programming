#include "3-calc.h"

/**
 *op_add - add
 *@a:variable 1
 *@b:variable 2
 *Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - subtraction
 *@a:variable 1
 *@b:variable 2
 *Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multipli
 *@a:variable 1
 *@b:variable 2
 *Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - div
 *@a:variable 1
 *@b:variable 2
 *Return: a / b
 */

int op_div(int a, int b)
{
	if (b  == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 *op_mod - modulo
 *@a:variable 1
 *@b:variable 2
 *Return: a % b
 */

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
