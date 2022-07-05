#include "main.h"
/**
 * _abs - print absolute value of an integer
 * @p: input number as integer
 *
 * Return: absolute integer
 */
int _abs(int p)
{
	if (p >= 0)
	{
		return (p);
	}
	else
	{
		return (p * -1);
	}
}
