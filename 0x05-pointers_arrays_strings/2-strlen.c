#include "main.h"
/**
 * _strlen - entry point
 * @s: character
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
