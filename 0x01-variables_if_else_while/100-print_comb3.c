#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
int n = 0;
int i;

while (n <= 99)
{
i = n;
while (i < 99)
{
if (i / 10 % 10 > i % 10)
break;
i /= 10;
if (i == 0)
{
if ((n % 11) != 0 && n != 11)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (n < 89)
=======
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d;

for (d = 0; d < 100; d++)
{
putchar((d / 10) + '0');
putchar((d % 10) + '0');
if (d != 99)
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
{
putchar(',');
putchar(' ');
}
}
<<<<<<< HEAD
break;
}
}
n++;
}
putchar('\n');
=======
putchar('\n');

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
