#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: prints sign depend on input n
 *
 * Return: Returns 1 if n>0, Returns 0 if n=0, Returns -1 if n<0
*/

int print_sign(int n)
{
if (n > 0)
printf("+");
return (1);
if (n == 0)
printf("0");
return (0);
if (n < 0)
printf("-");
return (-1);
}
