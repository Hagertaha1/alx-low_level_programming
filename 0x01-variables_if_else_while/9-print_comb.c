#include <stdio.h>

/**
 * Main - program that prints all combinations of single digit numbers
 *
 * Return: always 0 (success)
*/

int main(void)
{ int n = '0';
while (n <= '9')
{putchar(n);
if (n != '9')
putchar(',');
putchar(' ');
}
n++;
putchar('\n');
return (0);
}
