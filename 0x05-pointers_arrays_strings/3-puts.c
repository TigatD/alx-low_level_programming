#include "main.h"

/**
 * _puts - writes a function that prints a string, following new line
 *
 * @str: this is my entry
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
