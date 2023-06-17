#include <stdio.h>

/**
 * main - Entry point
 * Description: c program that prints the size of various types on the computer
 * Return: Always 0 (success)
*/

int main(void)
{   printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long: %u byte(s)\n", sizeof(long long));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
