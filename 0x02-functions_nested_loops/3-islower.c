#include <stdio.h>
#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: function checks the input c
 *
 * Return: 1 if c is (lowercase) and 0 otherwise is success
*/

int _islower(int c)
{
if (c <= 122)
return (1);
else
return (0);
}
