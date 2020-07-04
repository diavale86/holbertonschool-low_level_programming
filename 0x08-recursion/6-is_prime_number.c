/**
 *divide - divided number
 *@n: original number
 *@x: result of divided n
 *
 *Return: prime
 */
int divide(int x, int n)
{
	if (x % n == 0)
	{
		return (0);
	}
	if (n <= x)
	{
		return (1);

	}
	return (divide(n, x + 1));
}
/**
*is_prime_number - primer number
*@n: number
*Return: 1
*/
int is_prime_number(int n)
{

	if (n == 2)
	return (1);

	if (n <= 1)
	return (0);

	return (divide(n, 2));
}
