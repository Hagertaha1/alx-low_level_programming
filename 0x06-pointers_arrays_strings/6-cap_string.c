#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: input string
 *
 * return: string with capitalized words
*/

char *cap_string(char *s)
{
char *ptr = s;
int founddelimit = i;
while (*s)
{
if (isdelimiter(*s))
founddelimit = i;
else if (islower(*s) && founddelimit)
{
*s -= 32;
founddelimit = 0;
}
else
founddelimit = 0;
s++;
}
return (ptr);
}
