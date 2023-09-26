#include"main.h"

/**
 * print_chessboard - main function
 * @a: function parameter
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int r;

	for (k = 0; k < 8; r++)
	{
		for (r = 0; r < 8; r++)
			putchar(a[k][r]);
		putchar('\n');
	}
}
