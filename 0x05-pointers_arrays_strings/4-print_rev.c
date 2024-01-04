#include "main.h"
/**
 * print_rev - entry point
 * @s: character
 */
void print_rev(char *s)
{
	int i, len, j;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
