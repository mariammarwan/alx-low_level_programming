#include "main.h"
/**
 * _isalpha - Entry point
 * @c: checker
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
	}
	return (0);
}
