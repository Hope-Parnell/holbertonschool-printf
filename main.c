#include "holberton.h"
#include <stdio.h>

/**
 * main - testing function
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	i = _printf("Int Test: %i\n", 253);
	j = printf("Int Test: %i\n", 253);
	if (i != j)
		printf("%d != %d\n", i , j);
	return (0);
}
