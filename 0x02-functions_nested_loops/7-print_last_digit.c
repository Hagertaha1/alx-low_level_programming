#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number
 *
 * @n: prints the last digit input n
 *
 * Return: the value of the last digit
*/

int print_last_digit(int n)
{
int digit;
if (n < 0)
{digit = -1 * (n % 10);
else
digit = n % 10;
}
_putchar(digit + '0');
return (digit);
}
