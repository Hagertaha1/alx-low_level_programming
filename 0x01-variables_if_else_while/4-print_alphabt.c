#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: c program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{char ch = 'a';
while (ch <= 'z')
{ if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
