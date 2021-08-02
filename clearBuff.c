#include "holberton.h"

/**
 * clearBuff - writes current buffer to standard output and clears it
 * @buff: pointer to buffer array
 * @b: pointer to buffer counter
 */

void clearBuffer(char *buff, int *b, int *bc)
{
	int i;

	write(1, buff, 1024);
	for (i = 0; i < 1024; i++)
	{
		buff[i] = '\0';
	}
	*b = 0;
	*bc++;
}
