#include"main.h"

/**
 * print_array - function name
 * @a: first function parameter
 * @n: second function parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		{
			if (i < n - 1)
				printf(", ");
		}
		printf("\n");
	}
}
