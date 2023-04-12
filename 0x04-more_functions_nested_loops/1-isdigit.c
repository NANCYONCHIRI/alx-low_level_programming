#include "main.h"

/**
<<<<<<< HEAD
* _isdigit - checks for a digit
* @c: character to be checked
* Return: 1 if c is a digit, otherwise 0
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
=======
* _isdigit - input
*
* Description: define if a character is a number
* @c: charater
* Return: 1 yes 0 no
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
>>>>>>> 7fb6514dd7148c87afffceae603482a02109dc09
return (0);
}
