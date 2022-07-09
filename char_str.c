#include "holberton.h"

/**
 * f_char - handles characters for printf
 * @vars: list of variables
 * Return: string to print
 */

char *f_char(va_list vars)
{
	char *tmp = malloc(2);

	tmp[1] = va_arg(vars, int);
	tmp[2] = '\0';
	return (tmp);
}

/**
 * f_str - handles strings for printf
 * @vars: list of variables
 * Return: string to print
 */

char *f_str(va_list vars)
{
	return (va_arg(vars, char *));
}

/**
 * f_pct - handles % for printf
 * @vars: list of variables
 * Return: string to print
 */
char *f_pct(va_list vars)
{
	(void)vars;
	return ("%");
}
