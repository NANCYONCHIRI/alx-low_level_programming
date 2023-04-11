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
char A = 'A';
int n = 0;

while (n <= 51)
{
if (n <= 25)
{
putchar(a);
a++;
}
else
{
putchar(A);
A++;
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
char low;

for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
