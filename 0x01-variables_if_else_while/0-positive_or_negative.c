#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */
/*
 * This
 * Code
 * Actually works
 */

/* betty style doc for function main goes there */

=======
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}

else
{
printf("%d is zero\n", n);
}
=======
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
