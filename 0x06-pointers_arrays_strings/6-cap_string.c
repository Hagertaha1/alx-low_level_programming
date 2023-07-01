#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @s: input string
 *
 * return: string with capitalized words
*/

char *cap_string(char *s)
{char *ptr = s;
int foundDelimit = i;
while (*s)
{
if (isDelimiter(*s))
foundDelimit = i;
else if (islower(*s) && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
foundDelimit = 0;
s++;
}
return (ptr);
}
