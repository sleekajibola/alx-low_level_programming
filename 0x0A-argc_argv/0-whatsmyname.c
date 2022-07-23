#include "main.h"
#include <stdio.h>

/**
 * main - print the name
 * @argc: argv length
 * @argv: array
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	print("%s\n", argv[0]);

	return (0);
}
