#include "main.h"
/**
 * main - write a function that print alphabet in lowercase followed by a new line
 *
 * Return: Alway 0 (Success)
 */
void print_alphabet(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
	return (0);
}
