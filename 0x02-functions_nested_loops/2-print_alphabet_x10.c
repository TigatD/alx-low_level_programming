#include "main.h"

/**
 * print_alphabet - prints ten times in lowercase
 */
void print_alphabet_x10(void);
{
	int ten;
	char me;

	for (ten = 0; ten <= 9; ten++)
	{
		for (me = 'a'; me <= 'z'; me++)
			_putchar(me);
	}
	_putchar('\n');
}

