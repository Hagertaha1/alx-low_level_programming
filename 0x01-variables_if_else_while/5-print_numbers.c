#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all single digit numbers of 10 start from 0
 *
 * Return: always 0 (success)
*/

int main(void)
{ int n;
n = 0;
while (n < 10)
{putchar(n + '0');
n++;
putchar('\n');
}
return (0);
}
