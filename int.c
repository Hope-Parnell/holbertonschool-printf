#include "main.h"

/**
 * f_int - handles chars for printf
 * @vars: list of variables
 * Return: string to print
 */
char *f_int(va_list vars)
{
	int i, j, is_neg = 0, n = va_arg(vars, int);
	char *tmp, t;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	tmp = malloc(12);
	if (n < 0)
	{
		is_neg = 1;
		tmp[0] = '-';
		n = -n;
	}
	for (j = 0; n != 0; n /= 10, j++)
		tmp[j] = (n % 10) + '0';
	tmp[j] = '\0';
	for (i = is_neg, j--; i < j; i++, j--)
	{
		t = tmp[i];
		tmp[i] = tmp[j];
		tmp[j] = t;
	}
	return (tmp);
}
