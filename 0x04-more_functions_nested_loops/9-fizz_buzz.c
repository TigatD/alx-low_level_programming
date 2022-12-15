#include <stdio.h>

/**
 * main - prints for 3 and 5 numbers buzz and fizz
 * Return: 0
 */
int main(void)
{
	int n;

	n = 1;
	priintf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
	}
	printf('\n');
	return (0);
}
