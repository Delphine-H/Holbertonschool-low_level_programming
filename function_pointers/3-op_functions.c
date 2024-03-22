#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - function that add 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: result the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplicate 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: result of division
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that return the modulo of 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: result the rest of the divide of num1 by num2
*/
int op_mod(int a, int b)
{
	return (a % b);
}
