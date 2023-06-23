#include <stdio.h>
#include "main.h"

/**
 *_isdigit - function that checks for a digit
 *
 * @c: checks the input c
 *
 * Return: 1 if c is a digit, 0 otherwise
*/

int _isdigit(int c)
{
if (c < 10)
return (1);
else
return (0);
}
