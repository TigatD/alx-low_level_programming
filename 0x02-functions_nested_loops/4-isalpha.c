#include "main.h"

/**
 *_isalpha - checks if char alphabet
 *@c: the char
 *
 *Return: 1 if char is alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
