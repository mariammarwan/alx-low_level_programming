#include "main.h"
/**
 * swap_int - entry point
 * @a: character
 * @b: character
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
