#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int size;

	size = _printf("%b", 98);
	printf("\nnumber of printed text is %d\n", size);

	return (0);
}
