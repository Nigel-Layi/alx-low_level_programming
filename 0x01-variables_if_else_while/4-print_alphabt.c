#include<stdio.h>

/**
 * main - print alphabet it lowercase except q & e
 * Return: always 0
 */

int main(void)
{
	char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			if (letter != 'e' && letter != 'q')
				putchar(letter);
		}
			putchar('\n');
			return (0);
}

