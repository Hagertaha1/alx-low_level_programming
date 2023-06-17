#include <stdio.h>

/**
 * main - Entry point
 * Description: c program that prints the size of various types on the computer
 * Return: Always 0 (success)
*/

int main(void)
{   printf("Size of a char: %u byte(s)", sizeof(char));
	printf("Size of an int: %u byte(s)", sizeof(int));
	printf("Size of a long int: %u byte(s)", sizeof(long int));
	printf("Size of a long long: %u byte(s)", sizeof(long long));
	printf("Size of a float: %u byte(s)", sizeof(float));
return (0);
}
