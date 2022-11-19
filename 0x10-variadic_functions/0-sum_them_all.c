#include "variadic_functions.h"

/**
  * sum_them_all - gives sum of all parameters
  * @n: function parameter
  *
  * Return: ...
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(valist, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
