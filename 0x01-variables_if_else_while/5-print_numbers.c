#include<stdio.h>

/**
 * main - print single digit numbers
 * Return: always 0
 */

int main(void)
{
	int a;
		for (a = 0; a < 10; a++)
		{
			putchar(a + '0');
		}
			putchar('\n');
		return (0);
}
