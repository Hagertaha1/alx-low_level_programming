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
if (ch <= 'z')
putchar(ch);
ch++;
putchar("\n");
return (0);
}
