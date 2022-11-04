#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op_add - function addition
 *@a: number1
 *@b: number 2
 *
 *Return: sum o
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - function substraction
 *@a: number 1
 *@b: number 2
 *
 *Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - function multiplication
 *@a: number 1
 *@b: number 2
 *
 *Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - function division
 *@a: number 1
 *@b: number 2
 *
 *Return: result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - function  modulo
 *@a: number 1
 *@b: number 2
 *
 *Return: remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
