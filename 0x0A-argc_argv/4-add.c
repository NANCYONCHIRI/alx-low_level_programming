#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include <ctype.h>
/**
* main - adds positive numbers.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
int i, j, add = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
=======
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
int i, j, length, sum;
char *ptr;

if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
ptr = argv[i];
length = strlen(ptr);

for (j = 0; j < length; j++)
{
if (isdigit(*(ptr + j)) == 0)
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
{
printf("Error\n");
return (1);
}
}
<<<<<<< HEAD
add += atoi(argv[i]);
}
printf("%d\n", add);
=======

sum += atoi(argv[i]);
}

printf("%d\n", sum);
}
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
