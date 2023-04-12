<<<<<<< HEAD
#include <stdio.h>
/**
* main - prints its name, followed by a new line.
* @argc: number of command line arguments.
* @argv: array that contains the program command line arguments.
* Return: 0 - success.
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
=======
#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
printf("%s\n", argv[argc * 0]);

>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
