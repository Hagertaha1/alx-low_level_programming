#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Uses _putchar function to print alphabet from a - z
*/

void print_alphabet(void)
{int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
