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
digit = n % 10;
return (digit);
}
