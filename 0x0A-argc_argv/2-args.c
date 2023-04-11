#include <stdio.h>
<<<<<<< HEAD
/**
* main - prints all arguments it receives.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
=======
#include "main.h"

/**
* main - Prints all arguments passed into main
* @argc: Number of command line arguments
* @argv: Array name
* Return: 0
*/

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
<<<<<<< HEAD
=======

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
