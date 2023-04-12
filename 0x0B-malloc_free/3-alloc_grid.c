<<<<<<< HEAD
#include "main.h"		
#include <stdlib.h>
		
=======
#include "main.h"
#include <stdlib.h>

>>>>>>> 95719f31796d693c29d61912a1383da95fb07144
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
<<<<<<< HEAD
		
int **alloc_grid(int width, int height)		
=======

int **alloc_grid(int width, int height)
>>>>>>> 95719f31796d693c29d61912a1383da95fb07144
{
int **mee;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
mee = malloc(sizeof(int *) * height);
if (mee == NULL)
return (NULL);
<<<<<<< HEAD
for (x = 0; x < height; x++)	
=======
for (x = 0; x < height; x++)
>>>>>>> 95719f31796d693c29d61912a1383da95fb07144
{
mee[x] = malloc(sizeof(int) * width);
if (mee[x] == NULL)
{
for (; x >= 0; x--)
free(mee[x]);
free(mee);
return (NULL);
<<<<<<< HEAD
}	
}
for (x = 0; x < height; x++)	
{
for (y = 0; y < width; y++)
mee[x][y] = 0;	
}
return (mee);		
=======
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
mee[x][y] = 0;
}
return (mee);
>>>>>>> 95719f31796d693c29d61912a1383da95fb07144
}
