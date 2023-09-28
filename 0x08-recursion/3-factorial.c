#include"main.h"

/**
 * factorial - main function
 * @n: function parameter
 * Return: n
 */

int factorial(int n)
{
	if (n < 0)
		return (n - 1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
