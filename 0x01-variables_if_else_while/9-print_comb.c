#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: program that prints all combinations of single-digit numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{ int n;
for (n = 0; n <= 9; n++)
{putchar(n + '0');
putchar(",");
putchar(" ");
}
putchar('\n');
return (0);
}
