#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int size;

	size = _printf("najib %c %s are 1 and %d", '&', "abba", 2);

	printf("\nnumber of printed text is %d\n", size);

	return (0);
}
