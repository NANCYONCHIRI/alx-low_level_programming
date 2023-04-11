<<<<<<< HEAD
#include "main.h" 


/**
* print_alphabet - Make the alphabet
*
* Return: void
*/
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

=======
#include "holberton.h"

/**
 * print_alphabet - A function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
_putchar(c);
c++;
}
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
_putchar('\n');
}
