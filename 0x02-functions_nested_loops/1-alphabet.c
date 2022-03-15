#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function name
 * Description: prints lowercase letters when called
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

