#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: Its teh input string
 * Return: Length of the string
*/

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
