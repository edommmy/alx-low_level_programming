#include "main.h"
/**
 *free_grid - frees a 2D grid that had been created on
 *the last project
 *@grid: matrix double pointer 
 *@height: rows (pointer)
 *Return: void
 */
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(*(grid + x));
}
free(grid);
}
