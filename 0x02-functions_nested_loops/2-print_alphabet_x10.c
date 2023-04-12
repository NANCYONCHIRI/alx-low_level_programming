<<<<<<< HEAD
#include "main.h"

/**
* print_alphabet_x10 - Make alphabet x10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
char c;
int i = 0;

while (i <= 9)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}

_putchar('\n');

i++;
=======
#include "holberton.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char c;
int n = 0;

for (; n < 10; n++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
}
}
