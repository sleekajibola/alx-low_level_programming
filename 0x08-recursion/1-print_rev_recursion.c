#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer that stores string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
		_print_rev_recursion(s[i]);
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
}
