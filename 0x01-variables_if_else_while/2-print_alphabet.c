#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar("\n");
	return (0);
}
