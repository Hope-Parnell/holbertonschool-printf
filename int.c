#include "main.h"

/**
 * f_int - handles chars for printf
 * @vars: list of variables
 * Return: string to print
 */
char *f_int(va_list vars)
{
	int i, j = 0, offset = 0, n = va_arg(vars, int);
	char *tmp, t;

	tmp = malloc(12);
	if (!tmp)
		return (NULL);
	if (n == 0)
		tmp[offset++] = '0';
	if (n < 0)
	{
		offset = 1;
		tmp[j++] = '-';
		n = -n;
		if (n < 0)
		{
			tmp[j++] = '8';
			n /= -10;
		}
	}
	for (; n != 0; n /= 10, j++)
		tmp[j] = (n % 10) + '0';
	tmp[j] = '\0';
	for (i = offset, j--; i < j; i++, j--)
	{
		t = tmp[i];
		tmp[i] = tmp[j];
		tmp[j] = t;
	}
	return (tmp);
}
