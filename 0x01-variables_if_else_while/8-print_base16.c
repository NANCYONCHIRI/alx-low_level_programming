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
char a = 'a';

while (n < 16)
{
if (n < 10)
putchar(n + '0');
else
{
putchar(a);
a++;
}
n++;
}
putchar('\n');
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
char low;

for (d = '0'; d <= '9'; d++)
putchar(d);
for (low = 'a'; low <= 'f'; low++)
putchar(low);
putchar('\n');

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
