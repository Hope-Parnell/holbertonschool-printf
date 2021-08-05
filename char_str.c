#include "holberton.h"

/**
 * prt_char - prints chars
 * @ct: character count
 * @c: char being pulled in
 * Return: ct
 */

int prt_char(int ct, char c)
{
	write(1, &c, 1);
	ct++;
	return (ct);
}

/**
 * prt_str - prints string
 * @ct: character count
 * @str: string
 * Return: amount of characters being printed
 */

int prt_str(int ct, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (ct + write(1, str, i));
}

/**
 * prt_pct - prints %
 * @ct: character count
 * Return: character count
 */
int prt_pct(int ct)
{
	char c = '%';

	write(1, &c, 1);
	ct++;
	return (ct);
}
