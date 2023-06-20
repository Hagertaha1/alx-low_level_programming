#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Description: c program assign random number
 *
 * Return: 0 (success)
*/

int main(void)
{
int n, digit;
digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (digit > 5)
printf("Last digit of %i and is greater than 5\n", n);
else if (digit == 0)
printf("Last digit of %i is zero\n", n);
else if (digit < 6 && digit != 0)
printf("Last digit of %i and is less than 6 and not 0\n", n);
return (0);
}
