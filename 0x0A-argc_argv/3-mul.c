#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
/**
* main - multiplies two numbers.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[])
{
if (argc != 3)
=======
#include "main.h"

/**
* main - Program that takes first two integer arguments and prints the product
* @argc: Number of command line arguments
* @argv: Array name
* Return: 1 if not enough arguments passed in, 0 otherwise
*/

int main(int argc, char *argv[])
{
int i, j;

if (argc == 1 || argc == 2)
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
{
printf("Error\n");
return (1);
}
<<<<<<< HEAD
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
=======
else
{
j = 1;

for (i = 1; i < 3; i++)
j *= atoi(argv[i]);

printf("%d\n", j);
}

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
