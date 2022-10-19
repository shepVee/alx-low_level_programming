#ifndef main
#define main

/**
 *Function - used to print characters
 *
 *putchar function for printinh out characters
 *
 *Return: Always 1 (Sucess)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#endif
