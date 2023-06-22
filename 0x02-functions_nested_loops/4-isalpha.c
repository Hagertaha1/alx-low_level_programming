#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 *
 * @c: checkes the c input
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 (otherwise success)
*/

int _isalpha(int c)
{
if (c <= 122 && c >= 97) 
return (1);	
if (c <= 90 && c >= 65)
return (1);
return (0);
}
