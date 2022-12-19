#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: this is the entry
 *
 * Return: the length value
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}

