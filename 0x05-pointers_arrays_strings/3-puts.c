#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: string to print 
 *
 * Return: length of string
 */
void _puts(char *str)
{
	int p = 0;

	while ( str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
