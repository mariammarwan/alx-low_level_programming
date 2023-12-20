#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: checker
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar(n);
		return (n);
	}
}
