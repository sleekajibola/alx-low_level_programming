#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer that stores string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[i] != 0)
	{
		return;
	}

		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
}
