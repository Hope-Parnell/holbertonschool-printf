#include "holberton.h"

void prt_char(char *buff, int *b, int *bc, va_list vars)
{
	if (*b == 1024)
		clearBuffer(buff, b, bc);
	buff[*b] = va_arg(vars, int);
}
void prt_str(char *buff, int *b, int *bc, va_list vars)
{
int i;
char *str = va_arg(vars, char *);

if (!str)
return;
for (i = 0; str[i] != '\0'; i++)
  {
    if (b == 1024)
      clearBuffer(buff, b, bc);	
    buff[*b] = str[i];
    *b++;
  }
}
void prt_pct(char *buff, int *b, int *bc)
{
	if (*b == 1024)
		clearBuffer(buff, b, bc);
	buff[*b] = '%';
}
