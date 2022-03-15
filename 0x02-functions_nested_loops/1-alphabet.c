#include <stdio.h>
#include "main.h"
/**
 *description :prints alphabets in lowercase
 *main : prints alphabets 
 *return 0:success
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
int main(void)
{
    print_alphabet;
    return (0);
}