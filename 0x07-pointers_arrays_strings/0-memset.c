#include "main.h"
/**
 * _memset - fills memory with a constant of "n" bytes
 * @s: array of set
 * @b: what to set it to
 * @n: number of bytes
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
