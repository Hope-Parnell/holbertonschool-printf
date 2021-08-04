#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _printf(const char *format, ...);
int prt_char(int ct, char c);
int prt_str(int ct, char *str);
int prt_pct(int ct);
int prt_int(int ct, int n);

#endif /*HOLBERTON_H*/
