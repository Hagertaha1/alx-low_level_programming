#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: takes the output
 *
 * Return: nothing
*/

void print_rev(char *s)
{int i = 0;
while (s[i])
{_putchar(s[i]);
i--;
}
_putchar('\n');
}
