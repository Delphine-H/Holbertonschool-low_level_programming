#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: char to initialize
 * 
 * Return: Pointer of array or NULL if size = 0
 */

 char *create_array(unsigned int size, char c)
{
    char *tableau;
    unsigned int i;

    if (size > 0)
    {    
        tableau = malloc(size * sizeof(char));
        for (i = 0; i < size; i++)
        {
        tableau[i] = c;
        }
        return (tableau);
    }
    
    return (NULL);

}