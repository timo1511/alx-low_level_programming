#include "main.h"

/**
 * binary_to_unit - converts binary to unsigned int
 * @b: string with binary no.
 *
 * Return: coverted no.
*/
unsigned int binary_to_unit(const char *b)
{
	int x;
	unsigned int red_val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		red_val = 2 * red_val + (b[x] - '0');
	}

	return (red_val);
}
