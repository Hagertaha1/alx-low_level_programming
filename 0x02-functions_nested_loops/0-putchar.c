#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: c program that prints
 *
 * Return: 0 (success)
*/

int main(void)
{char str[] = "_putchar";
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(str[ch]);
_putchar('\n');
return (0);
}

