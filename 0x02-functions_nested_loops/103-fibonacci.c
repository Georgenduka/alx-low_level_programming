#include <stdio.h>
#include "main.h"

/**
 * main - calls fibonacci function
 * Return: 0
 */

int main(void)
{
	fibonacci(3);

	return (0);
}

/**
 * fibonacci - prints sequence of addition of previous two numbers from 0 & 1
 * @n: limit of sequence
 */

void fibonacci(int n)
{
	int i;

	long j = 0, k = 1, l, sum;

	for (i = 1; i < n; i++)
	{
		l = j + k;
		j = k, k = l;

		if (l % 2 == 0)
		{
		sum = l + sum;
		}
	}
		
		printf("%lu", sum);
}
