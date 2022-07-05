#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @e: integer to be checked
 *
 * Return: last digit of a given mumber
 */
int print_last_digit(int e)
{
	int c;

	c = e % 10;

	if (e >= 0)
	{
		_putchar(c + 48);
		return (c);
	}
	else
	{
		_putchar(-c + 48);
		return (-c);
	}
}
