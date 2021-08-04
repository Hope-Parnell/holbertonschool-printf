#include "holberton.h"

int prt_int(int ct, int n)
{
	int i;

	if (n == -2147483648)
	{
		ct += 11;
		write(1, "-2147483648", 11);
		return (ct);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		ct++;
		n = -n;
	}
	if (n / 10 != 0)
	{
		ct = prt_int(ct, n / 10);
	}
	i = (n % 10) + '0';
	write(1, &i, 1);
	ct++;
	return(ct);
}
