#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc : variable to count number of parameters
 * @argv : variable to count number of items in array
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	 if (argc > 0)
		 printf("%s\n", argv[0]);
	 return (0);
}
