#include "main.h"

/**
 * print numbers - print num 0 to 9 but 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for ((c = '0'; c <= '9'; c++) && (c != '2'; c != '4'))
	{
		_putchar(c);
	}
	return (0);
}
