#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers (0 - 9)
 *
 * Description: prints the inputs
 *
 * Return: return numbers
*/

void print_numbers(void)
{int n = 0;
while (n < 10)
{_putchar(n + '0');
}
_putchar('\n');
}
