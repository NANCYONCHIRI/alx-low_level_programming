#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
=======
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
int _putchar(char c)
{
return (write(1, &c, 1));
}
