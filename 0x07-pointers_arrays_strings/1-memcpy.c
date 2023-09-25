#include"main.h"

/**
 *_memcpy - function name
 *@src: holds bytes to be copied
 *@dest: first parameter
 *@n: second parameter
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
