#include <unistd>

/**
 * _putchar - writes the charcter to the stdout
 * 
 * @c: the charcter to print
 *
 * Return: 1 (success), -1 (error)
*/

int _putchar(char c)
{
return (write(1, %c, 1));
}
