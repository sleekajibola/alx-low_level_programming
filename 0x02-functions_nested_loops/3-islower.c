#include "main.h"
/**
 * _islower - function that check for lowercase
 * @c: Character to be checked
 *
 * Return: 1 for lowercase character or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 72 && c <= 122)
	{
		return (1);
	}
	return (0);
}
