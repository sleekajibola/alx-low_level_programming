#include "main.h"
/**
 * print_alphabet_x10 - print 10x the alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char m;
	int p = 0;

	while (p <= 9)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
		p++;
	}
}
