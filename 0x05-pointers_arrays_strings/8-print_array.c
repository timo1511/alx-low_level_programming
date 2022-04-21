#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints
 * followed by a new line
 * @a: input array
 * @n: length of the array
 *
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
