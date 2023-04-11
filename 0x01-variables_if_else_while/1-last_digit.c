<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
/* your code goes there */
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
else if (lastDigit == 0)
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
else if (lastDigit < 6 && lastDigit != 0)
{
printf("Last digit of %d is %d and is less than 6 and ", n, lastDigit);
printf("not 0\n");
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int L;
char str[] = "Last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;

if (L > 5)
printf("%s %d is %d and is greater than 5\n", str, n, L);
else if (L == 0)
printf("%s %d is %d and is 0\n", str, n, L);
else if (L < 6)
printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
