#include "holberton.h"

int prt_char(int ct, char c)
{
	write(1, &c, 1);
	ct++;
	return(ct);
}

int prt_str(int ct, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++);

	return(ct + write(1, str, i));

}

int prt_pct(int ct)
{
	char c = '%';

	write(1, &c, 1);
	ct++;
	return(ct);
}
