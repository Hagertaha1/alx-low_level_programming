#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: prints 0,1, - 9
 *
 * Return: always 0 (success)
*/

int main(void)
{int n = '0';
while (n <= '9')
{putchar(n);
if (n != '9')
{putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
