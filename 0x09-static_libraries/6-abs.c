#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @value: Takes in a value
 *
 * Return: 0 if successful
 */
int _abs(int value)
{
	if (value >= 0)
		return (value);
	else
		return (value * -1);
}
