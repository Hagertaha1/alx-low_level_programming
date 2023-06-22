#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
*/

int main(void)
{int n = 'z';
while (n >= 'a')
{putchar(n + '0');
n--;
}
putchar('\n');
return (0);
}
