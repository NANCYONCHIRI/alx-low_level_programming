#include <stdio.h>
<<<<<<< HEAD
/**
* main - prints the number of arguments passed into it.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
=======
#include "main.h"

/**
* main - Prints the number of arguments passed into main
* @argc: Number of command line arguments
* @argv: Array name
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;

if (argc == 1)
printf("%d\n", argc - 1);
else
{
for (i = 0; *argv; i++, argv++)
			;

printf("%d\n", i - 1);
}

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
