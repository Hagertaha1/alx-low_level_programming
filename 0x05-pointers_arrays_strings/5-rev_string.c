#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: takes string and reverse
 *
 * Return: nothing
*/

void rev_string(char *s)
{ int i, l;
char temp
for (l = 0; l != '\0'; l++)
;
for (i = 0; i < l / 2; i++)
{temp = s[i];
s[i] = s[1 - 1 - i];
s[1 - 1 - i] = temp;
}
}
