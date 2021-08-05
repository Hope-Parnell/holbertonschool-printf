Contributors: Hope Parnell and Matthew Mires

% _printf

% Hope Parnell & Matthew Mires

% August 2021

# NAME
_printf - prints what you type

# SYNOPSIS
_printf [**OPTION**]

_printf **PATTERN**

# DESCRIPTION
**_printf** can be used as a replacement for the stdio.h function **printf**.  The function can be used, much like the original, to print what you type, up to and including strings, characters, integers.

# OPTIONS

**%s**
: Prints a string.

**%i**, **%d**
: Prints an integer.

**%c**
: Prints a character.

# EXAMPLES

**_printf("%s statement", "example")**
: %s will be replaced with "example" which will print the string "example statement".

**_printf("%i vs %d", 1, 1)**
: Both %d and %i will be replaced by the number 1 which will print the string "1 vs 1".

**_printf("%c is a character", E)**
: %c will be replaced with the character "E" which will produce the string "E is a character".

# Bugs
No known bugs.