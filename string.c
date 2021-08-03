#include "holberton.h"

void prt_str(char *buff, int *b, int *bc, va_list vars);
{
int i;
char *str = va_arg(vars, char *);

if (!str)
return;
for (i = 0; str[i] != '\0'; i++)
  {
    if (b == 1024)
      clearBuffer(buff, b, bc)	
    buff[b] = str[i];
    b++;
  }
}
