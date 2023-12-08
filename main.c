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

	size = _printf("%d", -1024);
	printf("\nnumber of printed text is %d\n", size);

	return (0);
}
