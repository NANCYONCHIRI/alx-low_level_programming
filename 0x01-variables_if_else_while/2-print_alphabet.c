#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
char a = 'a';
int n = 0;

while (n < 26)
{
putchar(a);
a++;
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
char low;

for (low = 'a'; low <= 'z'; low++)
putchar(low);
printf("\n");

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
