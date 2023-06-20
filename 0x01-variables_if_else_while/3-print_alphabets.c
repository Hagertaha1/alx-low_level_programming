#include <studio.h>

/**
 * main - Entry point
 *
 * Description: c program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{char ch1 = 'a';
chr ch2 = 'A';
while (ch1 <= 'z')
{putchar(ch1);
ch1++;
}
while (ch2 <= 'Z')
{putchar(ch2);
ch2++;
}
putchar('\n');
return (0);
}
