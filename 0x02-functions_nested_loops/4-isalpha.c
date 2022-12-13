#include "main.h"

/**
 * _isalpha - checkes if a character is alphabet or not
 * @c: the character
 * Return: 1 if character is alphabet, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && C <= 'Z')
		return (1);
	else
		return (0);
}
