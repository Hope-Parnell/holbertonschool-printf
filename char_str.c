#include "main.h"

/**
 * f_char - handles characters for printf
 * @vars: list of variables
 * Return: string to print
 */

char *f_char(va_list vars)
{
	char *tmp = malloc(2);

	if (!tmp)
		return (NULL);
	tmp[0] = va_arg(vars, int);
	tmp[1] = '\0';
	return (tmp);
}

/**
 * f_str - handles strings for printf
 * @vars: list of variables
 * Return: string to print
 */

char *f_str(va_list vars)
{
	char *tmp = va_arg(vars, char *);

	if (!tmp)
		tmp = "(null)";
	return (tmp);
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
