<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the minimum number of coins to make change for an amount.
* of money.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
int cents, ncoins = 0;

if (argc == 1 || argc > 2)
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - Helper function that does all the mathematics
 * @i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int coinConverter(int i)
{
int count = 0;

while (i != 0)
{
if (i % 10 == 9 || i % 10 == 7)
i -= 2;
else if (i % 25 == 0)
i -= 25;
else if (i % 10 == 0)
i -= 10;
else if (i % 5 == 0)
i -= 5;
else if (i % 2 == 0)
{
if (i % 10 == 6)
i -= 1;
else
i -= 2;
}
else
i -= 1;

count++;
}

return (count);
}

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
int i, coin;

coin = 0;

if (argc != 2)
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
{
printf("Error\n");
return (1);
}

<<<<<<< HEAD
cents = atoi(argv[1]);

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else if (cents >= 1)
cents -= 1;
ncoins += 1;
}
printf("%d\n", ncoins);
=======
i = atoi(argv[1]);

if (i < 0)
printf("0\n");
else
{
coin = coinConverter(i);

printf("%d\n", coin);
}

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
