#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0 (success)
*/

int main(void)
{int n;
char ch;
for (n = 0; n < 10; n++)
putchar(n + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
