#include <unistd.h>

/**
 * _putchar - writes the charcter c to the stdout
 * 
 * @c: the charcter to print
 *
 * Return: 1 (success)
 * on error, -1 is returned, errno is set
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
