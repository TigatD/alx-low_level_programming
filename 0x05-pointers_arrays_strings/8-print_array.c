#include "main.h"
#include <stdio.h>
/**
 * print_array - unction that prints n elemens
 * @a: pointer to first
 * @n: pointer to second
 * Return: 0
 */
void pirnt_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
