#include"main.h"

/**
 * _isupper - check for uppercase
 * @c: function parameter
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
